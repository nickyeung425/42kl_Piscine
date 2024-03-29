#include <stdlib.h>

int	check_value_onboard(int *values, int values_size, int value)
{
	int	index;

	index = 0;
	while (index < values_size)
	{
		if (value == values[index])
		{
			return (1);
		}
		index++;
	}
	return (0);
}

void remove_board_value(int ***board, int **board_solution, int i, int j, int value)
{
	int *new_array;
	int index;
	int new_index;

	if (check_value_onboard(board[i][j], board_solution[i][j], value) == 1)
	{
		new_array = (int *)malloc(sizeof(int) * (board_solution[i][j] - 1));
		index = 0;
		new_index = 0;
		while (index < board_solution[i][j])
		{
			if (board[i][j][index] != value)
			{
				new_array[new_index] = board[i][j][index];
				new_index++;
			}
			index++;
		}
		free(board[i][j]);
		board_solution[i][j] = board_solution[i][j] - 1;
		board[i][j] = new_array;
	}
}

void remove_board_value_row_col(int ***board, int **board_solution, int i, int j, int value)
{
	int index;

	index = 0;
	while (index < G_SIZE)
	{
		if (index != i && board_solution[index][j] != 1)
		{
			remove_board_value(board, board_solution, index, j, value);
		}
		if (index != j && board_solution[i][index] != 1)
		{
			remove_board_value(board, board_solution, i, index, value);
		}
		index++;
	}
}

void set_board_value(int ***board, int **board_solution, int i, int j, int value)
{
	free(board[i][j]);
	board[i][j] = (int *)malloc(sizeof(int));
	board_solution[i][j] = 1;
	board[i][j][0] = value;
	remove_board_value_row_col(board, board_solution, i, j, value);
}

void set_board_value_array(int ***board, int **board_solution, int i, int j, int *value, int value_size)
{
	int index;

	index = 0;
	free(board[i][j]);
	board[i][j] = value;
	board_solution[i][j] = value_size;
	board[i][j] = value;
}

void update_value_four(int ***board, int **board_solution, int index, int i, int j)
{
	int loop_index;

	loop_index = 0;
	while (loop_index < G_SIZE)
	{
		if (index < G_SIZE)
		{
			set_board_value(board, board_solution, i + (1 * loop_index), j, loop_index + 1);
		}
		else if (G_SIZE <= index && index < G_SIZE * 2)
		{
			set_board_value(board, board_solution, i + (-1 * loop_index), j, loop_index + 1);
		}
		else if (G_SIZE <= index * 2 && index < G_SIZE * 3)
		{
			set_board_value(board, board_solution, i, j + (1 * loop_index), loop_index + 1);
		}
		else
		{
			set_board_value(board, board_solution, i, j + (-1 * loop_index), loop_index + 1);
		}
		loop_index++;
	}
}

void update_value_one(int ***board, int **board_solution, int value, int i, int j)
{
	set_board_value(board, board_solution, i, j, value);
}

int get_possible_values_solutions_no(int *current_board_solutions, int current_board_solutions_no, int constraint_value)
{
	int current_board_solutions_index;
	int possible_values_index;
	int possible_solutions_no;

	possible_values_index = 1;
	possible_solutions_no = 0;
	current_board_solutions_index = 0;
	while (current_board_solutions_index < current_board_solutions_no)
	{
		while (possible_values_index <= (G_SIZE - constraint_value + 1))
		{
			if (current_board_solutions[current_board_solutions_index] <= (G_SIZE - constraint_value + 1))
			{
				possible_solutions_no++;
				break;
			}
			possible_values_index++;
		}
		current_board_solutions_index++;
	}
	return (possible_solutions_no);
}

void update_value_else(int ***board, int **board_solution, int value, int i, int j)
{
	int *possible_solutions;
	int possible_solutions_no;
	int possible_solutions_index;
	int current_board_solutions_index;

	possible_solutions_index = 0;
	current_board_solutions_index = 0;
	possible_solutions_no = get_possible_values_solutions_no(board[i][j], board_solution[i][j], value);
	possible_solutions = (int *)malloc(sizeof(int) * possible_solutions_no);
	while (current_board_solutions_index < board_solution[i][j])
	{
		if (board[i][j][current_board_solutions_index] <= (G_SIZE - value + 1))
		{
			possible_solutions[possible_solutions_index] = board[i][j][current_board_solutions_index];
			possible_solutions_index++;
		}
		current_board_solutions_index++;
	}
	set_board_value_array(board, board_solution, i, j, possible_solutions, possible_solutions_no);
}

void optimize_board(int ***board, int **board_solution)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < G_SIZE)
	{
		while (y < G_SIZE)
		{
			if (board_solution[x][y] == 1)
			{
				remove_board_value_row_col(board, board_solution, x, y, board[x][y][0]);
			}
			y++;
		}
		y = 0;
		x++;
	}
}
void update_board(int ***board, int **board_solution, int index, int value)
{
	int i;
	int j;

	i = get_i(index);
	j = get_j(index);
	if (value == G_SIZE)
	{
		update_value_four(board, board_solution, index, i, j);
	}
	else if (value == 1)
	{
		update_value_one(board, board_solution, G_SIZE, i, j);
	}
	else
	{
		update_value_else(board, board_solution, value, i, j);
	}
}

void prepare_board(int *constraint, int ***board, int **board_solution)
{
	int i;

	i = 0;
	while (i < G_SIZE * 4)
	{
		update_board(board, board_solution, i, constraint[i]);
		i++;
	}
	optimize_board(board, board_solution);
}

int *find_next_coordinates(int **board_solution)
{
	int i;
	int j;
	int *coordinates;

	i = 0;
	j = 0;
	coordinates = (int *)malloc(sizeof(int) * 2);
	while (i < G_SIZE)
	{
		while (j < G_SIZE)
		{
			if (board_solution[i][j] != 1)
			{
				coordinates[0] = i;
				coordinates[1] = j;
				return (coordinates);
			}
			j++;
		}
		j = 0;
		i++;
	};
	coordinates[0] = 0;
	coordinates[1] = 0;
	return (coordinates);
}

int ***copy_board(int ***board, int **board_solution)
{
	int row;
	int col;
	int val;
	int ***new_board;

	row = 0;
	col = 0;
	val = 0;
	new_board = (int ***)malloc(sizeof(int **) * G_SIZE);
	while (row < G_SIZE)
	{
		new_board[row] = (int **)malloc(sizeof(int *) * G_SIZE);
		while (col < G_SIZE)
		{
			new_board[row][col] = (int *)malloc(sizeof(int) * board_solution[row][col]);
			while (val < board_solution[row][col])
			{
				new_board[row][col][val] = board[row][col][val];
				val++;
			}
			val = 0;
			col++;
		}
		col = 0;
		row++;
	}
	return (new_board);
}

int **copy_board_solution(int **board_solution)
{
	int row;
	int col;
	int **new_board_solution;

	row = 0;
	col = 0;
	new_board_solution = (int **)malloc(sizeof(int *) * G_SIZE);
	while (row < G_SIZE)
	{
		new_board_solution[row] = (int *)malloc(sizeof(int) * G_SIZE);
		while (col < G_SIZE)
		{
			new_board_solution[row][col] = board_solution[row][col];
			col++;
		}
		col = 0;
		row++;
	}
	return (new_board_solution);
}

int find_solution_finished(int **board_solution)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while (row < G_SIZE)
	{
		while (col < G_SIZE)
		{
			if (board_solution[row][col] != 1)
			{
				return (0);
			}
			col++;
		}
		col = 0;
		row++;
	}
	return (1);
}
int find_solution(int ***board, int **board_solution, int *constraint)
{
	int *coordinates = find_next_coordinates(board_solution);
	int no_of_value_left = board_solution[coordinates[0]][coordinates[1]];
	int no_of_value_left_index = 0;
	int ***new_board = NULL;
	int **new_board_solution = NULL;
	if (find_solution_finished(board_solution) == 1)
	{
		int result = test_sudoku(board);
		if (result == 1)
		{
			result = test_constraint(board, constraint);
			if (result == 1)
			{
				ft_print_int_array_result(board);
				return (1);
			}
			return (0);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		while (no_of_value_left_index < no_of_value_left)
		{

			new_board = copy_board(board, board_solution);

			new_board[coordinates[0]][coordinates[1]][0] = board[coordinates[0]][coordinates[1]][no_of_value_left_index];

			new_board_solution = copy_board_solution(board_solution);

			new_board_solution[coordinates[0]][coordinates[1]] = 1;

			int result = find_solution(new_board, new_board_solution, constraint);
			if (result == 1)
			{
				return 1;
			}
			no_of_value_left_index++;
		}
	}
	return (0);
}

void find_solution_start(int *constraint, int ***board, int **board_solution)
{
	int result = find_solution(board, board_solution, constraint);
	if (result == 0)
	{
		ft_print_str("cannot find solution");
	}
}
