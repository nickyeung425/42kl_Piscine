/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:56:03 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 00:57:01 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	result;

	result = 1;
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z'))
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}
