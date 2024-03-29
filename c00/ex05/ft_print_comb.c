/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 01:58:25 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 00:44:33 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_nbr(char x, char y, char z)
{
	ft_putchar(x + '0');
	ft_putchar(y + '0');
	ft_putchar(z + '0');
	if (x != 7)
	{
		ft_print_comma();
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 1;
	z = 2;
	while (x <= 9)
	{
		while (y <= 9)
		{
			while (z <= 9)
			{
				if (x < y && y < z)
				{
					ft_print_nbr(x, y, z);
				}
				z++;
			}
			y++;
			z = 0;
		}
		x++;
		y = 0;
	}
}
