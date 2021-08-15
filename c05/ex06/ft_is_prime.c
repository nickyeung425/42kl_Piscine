/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:18:12 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/15 17:17:58 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	index;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb == 3)
		return (1);
	else if (nb == 5)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else if (nb % 3 == 0)
		return (0);
	else if (nb % 5 == 0)
		return (0);
	index = 2;
	while (index <= nb / index)
	{
		if (nb % index == 0)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
