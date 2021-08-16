/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:58:00 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/17 01:41:20 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_char_printable(char c)
{
	if (c >= ' ' && c != 127)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_char_printable(*str) == 1)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[*str / 16]);
			ft_putchar("0123456789abcdef"[*str % 16]);
		}
		str++;
	}
}
