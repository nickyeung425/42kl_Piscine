/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:25:17 by nick              #+#    #+#             */
/*   Updated: 2021/08/11 01:13:21 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	nb_index;

	index = 0;
	nb_index = 0;
	while (dest[index])
	{
		index++;
	}
	while (*src && nb_index < nb)
	{
		dest[index] = *src;
		index++;
		nb_index++;
		src++;
	}
	dest[index] = '\0';
	return (dest);
}
