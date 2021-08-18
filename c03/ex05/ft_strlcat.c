/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:19:59 by nick              #+#    #+#             */
/*   Updated: 2021/08/18 20:18:46 by wyeung           ###   ########.fr       */
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
	unsigned int	result_len;
	unsigned int	index_dest;
	unsigned int	index_src;

	if (size < 1)
		return (size + ft_str_len(src));
	index_dest = ft_str_len(dest);
	index_src = 0;
	while (src[index_src] && index_dest < size - 1)
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	if (size < ft_str_len(dest))
		return (size + ft_str_len(src));
	return (ft_str_len(dest) + ft_str_len(src));
}
