/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:54:38 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 00:55:53 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	result;

	result = 1;
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}
