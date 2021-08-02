void	ft_putchar(char c);

void	draw_condition(int x, int y, int row, int col)
{
	if ((row == 1 ) || (row == y))
	{
		if ((col == 1) || (col == x))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if ((col == 1) || (col == x))
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			draw_condition(x, y, row, col);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
