/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:54:18 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 00:49:52 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_lowest;
	int	lowest_index;
	int	index;
	int	inner_index;

	index = 0;
	while (index < size)
	{
		current_lowest = tab[index];
		lowest_index = index;
		inner_index = index;
		while (inner_index < size)
		{
			if (current_lowest > tab[inner_index])
			{
				current_lowest = tab[inner_index];
				lowest_index = inner_index;
			}
			ft_swap(&tab[index], &tab[lowest_index]);
			inner_index++;
		}
		index++;
	}
}
