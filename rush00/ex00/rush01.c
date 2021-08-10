/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:12:51 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:13:13 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_condition(int x, int y, int row, int col)
{
	if (row == 1 && col == 1)
	{
		ft_putchar('/');
	}
	else if (row == y && col == x && row != 1 && col != 1)
	{
		ft_putchar('/');
	}
	else if ((row == 1 && col == x) || (row == y && col == 1))
	{
		ft_putchar('\\');
	}
	else if (col > 1 && col < x && row > 1 && row < y)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
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
