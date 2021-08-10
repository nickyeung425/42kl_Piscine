/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:25:13 by nick              #+#    #+#             */
/*   Updated: 2021/08/11 01:13:19 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (dest[index])
	{
		index++;
	}
	while (*src)
	{
		dest[index] = *src;
		index++;
		src++;
	}
	dest[index] = '\0';
	return (dest);
}
