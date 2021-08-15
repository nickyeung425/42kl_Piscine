/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 01:34:53 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/14 22:51:40 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	index = 1;
	result = 1;
	while (index <= nb)
	{
		result *= index;
		index++;
	}
	return (result);
}
