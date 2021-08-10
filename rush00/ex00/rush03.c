/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:13:00 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:13:00 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_condition(int x, int y, int row, int col)
{
	if (((row == 1) || (row == y)) && (col == 1))
	{
		ft_putchar('A');
	}
	else if (((row == 1) || (row == y)) && (col == x))
	{
		ft_putchar('C');
	}
	else if (row > 1 && row < y && col > 1 && col < x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
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
