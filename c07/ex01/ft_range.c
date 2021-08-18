/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:38:22 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/18 19:38:37 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*no_arr;
	int	index;

	if (min >= max)
		return (0);
	index = 0;
	no_arr = (int *)malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		no_arr[index] = min;
		min++;
		index++;
	}
	return (no_arr);
}
