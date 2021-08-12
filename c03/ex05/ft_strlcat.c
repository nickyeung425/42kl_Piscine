/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:19:59 by nick              #+#    #+#             */
/*   Updated: 2021/08/11 20:01:14 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_str_len(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

void	ft_str_append(char *dest, char *src, unsigned int size)
{
	char	*result[size];
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	result_len;
	unsigned int	index;

	index = 0;
	if (size >= ft_str_len(src))
	{
		result_len = ft_str_len(dest) + ft_str_len(src);
		ft_str_append(dest, src, size);
	}
	else
	{
		result_len = (ft_str_len(dest)) + size + 1;
	}
	return (result_len);
}
