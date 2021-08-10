/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:57:39 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:11:21 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	result;

	result = 1;
	while (*str)
	{
		if (*str <= ' ' || *str > 126)
		{
			result = 0;
			break ;
		}
		str++;
	}
	return (result);
}
