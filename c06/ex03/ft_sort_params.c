// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_sort_params.c                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2021/08/15 18:27:19 by wyeung            #+#    #+#             */
// /*   Updated: 2021/08/19 21:13:07 by wyeung           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, &"\n", 1);
}

int	compare_str(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	sort_params(int size, char **str_array)
{
	int		index;
	char	*temp;

	index = 1;
	while (index < size - 1)
	{
		if (compare_str(str_array[index], str_array[index + 1]) > 0)
		{
			temp = str_array[index];
			str_array[index] = str_array[index + 1];
			str_array[index + 1] = temp;
			index = 0;
		}
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	if (argc > 1)
	{
		sort_params(argc, argv);
		index = 1;
		while (index < argc)
		{
			print_str(argv[index]);
			index++;
		}
	}
}
