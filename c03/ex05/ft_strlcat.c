/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:19:59 by nick              #+#    #+#             */
/*   Updated: 2021/08/19 00:32:59 by wyeung           ###   ########.fr       */
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
	unsigned int	index_dest;
	unsigned int	result_dest;
	unsigned int	index_src;
	unsigned int	result_src;

	if (size < 1)
		return (size + ft_str_len(src));
	result_dest = ft_str_len(dest);
	index_dest = ft_str_len(dest);
	index_src = 0;
	result_src = ft_str_len(src);
	while (src[index_src] && index_dest < size - 1)
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	if (size < result_dest)
		return (result_src + size);
	return (result_src + result_dest);
}
