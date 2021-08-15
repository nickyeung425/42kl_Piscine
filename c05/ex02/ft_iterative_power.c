/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:18:43 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/15 14:18:01 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	index = 2;
	result = nb;
	while (index <= power)
	{
		result *= nb;
		index++;
	}
	return (result);
}
