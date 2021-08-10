/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:19:59 by nick              #+#    #+#             */
/*   Updated: 2021/08/11 01:13:33 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*result;
	unsigned int	result_len;
	int				index;
	char			*dest_str;
	char			*src_str;

	index = 1;
	if (size >= ft_str_len(src))
		result_len = ft_str_len(dest) + ft_str_len(src);
	else
		result_len = (ft_str_len(dest)) + size;
	while (index < size)
	{
		dest[ft_str_len(dest) + index] = *src;
		src++;
		index++;
	}
	dest[ft_str_len(dest) + index] = '\0';
	return (result_len);
}
