/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:27:19 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/18 19:31:07 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	find_lowest_string(int start, int end, char **str_array)
{
	int	lowest;
	int	compare_result;
	int	index;

	index = start;
	while (index < end)
	{
		compare_result = compare_str(str_array[start], str_array[index]);
		if (compare_result >= 0)
		{
			lowest = index;
		}
		index++;
	}
	return (lowest);
}

void	sort_params(int size, char **str_array)
{
	int		index;
	int		lowest_index;
	char	*temp;

	index = 1;
	while (index < size)
	{
		lowest_index = find_lowest_string(index, size, str_array);
		temp = str_array[index];
		str_array[index] = str_array[lowest_index];
		str_array[lowest_index] = temp;
		swap_str(index, lowest_index, str_array);
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
