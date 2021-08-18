/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:27:57 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/18 19:31:54 by wyeung           ###   ########.fr       */
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
	print_char('\n');
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (argc > 1)
		{
			print_str(argv[argc - 1]);
			argc--;
		}
	}
}
