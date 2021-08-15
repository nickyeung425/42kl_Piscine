/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:27:19 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/15 18:27:20 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_str(char *str)
{
	while(*str)
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
	int compare_result;
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
	return lowest;
}

void swap_str(int s1, int s2, char **str_array)
{
	char *temp;

	temp = str_array[s1];
	str_array[s1] = str_array[s2];
	str_array[s2] = temp;
}

void sort_params(int size, char **str_array)
{
	int	index;
	int lowest_index;

	index = 1;
	while (index < size)
	{
		lowest_index = find_lowest_string(index, size, str_array);
		swap_str(index, lowest_index, str_array);
		index++;
	}
}

int	main(int argc, char **argv)
{
	int index;

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
