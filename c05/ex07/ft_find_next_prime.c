/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:21:16 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/18 19:02:57 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb == 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else if (nb % 3 == 0)
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

int	ft_find_next_prime(int nb)
{
	while (1 == 1)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
}
