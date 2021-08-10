/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:57:28 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:00:26 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	result;

	result = 1;
	while (*str)
	{
		if (!('A' <= *str && *str <= 'Z'))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}
