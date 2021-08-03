/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 02:37:18 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/02 20:48:45 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int x, int y)
{
	if ((j < y) && (i <= x))
	{
		ft_putchar(i + '0');
		ft_putchar(j + '0');
		ft_putchar(' ');
		ft_putchar(x + '0');
		ft_putchar(y + '0');
		if (!(i == 9 && j == 8 && x == 9 && y == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	loop_start(int i, int j, int x, int y)
{
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (x <= 9)
			{
				while (y <= 9)
				{
					ft_print(i, j, x, y);
					y++;
				}
				y = 0;
				x++;
			}
			x = 0;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	j = 0;
	x = 0;
	y = 0;
	loop_start(i, j, x, y);
}
