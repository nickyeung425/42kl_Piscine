/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:28:05 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/15 23:50:43 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	while (*str)
	{
		print_char(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		print_str(argv[0]);
		print_char('\n');
	}
	return (0);
}
