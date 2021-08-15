/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 04:18:28 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/15 15:27:24 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	binary_search(int nb)
{
	int	start;
	int	end;
	int	mid;
	int	result;

	start = 1;
	end = nb / 2;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid == nb / mid)
			return (mid);
		if (mid <= nb / mid)
		{
			start = mid + 1;
			result = mid;
		}
		else
			end = mid - 1;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	result;

	if (nb <= 0)
		return (0);
	if (nb <= 1)
		return (1);
	result = binary_search(nb);
	if (result * result == nb)
	{
		return (result);
	}
	return (0);
}
