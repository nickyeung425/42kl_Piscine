/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:28:01 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/15 18:28:02 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_char(char c)
{
	write(1, &c, 1);
}

void print_str(char *str)
{
	while(*str)
	{
		print_char(*str);
		str++;
	}
	print_char('\n');
}

int	main(int argc, char **argv)
{
	int index;

	if (argc > 1)
	{
		index = 1;
		while (index < argc)
		{
			print_str(argv[index]);
			index++;
		}
	}
}
