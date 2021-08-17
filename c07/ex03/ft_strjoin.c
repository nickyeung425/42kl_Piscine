/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:51:35 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/17 23:09:57 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	total_len(char **str, int size)
{
	int	total_len;
	int	index;

	total_len = 0;
	index = 0;
	while (index < size)
	{
		total_len += ft_strlen(str[index]);
		index++;
	}
	return (total_len);
}

int	ft_strappend(char *str, char *append, int str_index)
{
	int	index;

	index = 0;
	while (append[index])
	{
		str[str_index + index] = append[index];
		index++;
	}
	return (str_index + index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str_total_len;
	int		index;
	char	*result;
	int		result_index;

	index = 0;
	result_index = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str_total_len = total_len(strs, size) + (size - 1) * ft_strlen(sep) + 1;
	result = (char *)malloc(sizeof (char) * str_total_len);
	if (result == NULL)
		return (0);
	while (index < size)
	{
		result_index = ft_strappend(result, strs[index], result_index);
		if (index != size - 1)
			result_index = ft_strappend(result, sep, result_index);
		index++;
	}
	result[result_index + 1] = '\0';
	return (result);
}
