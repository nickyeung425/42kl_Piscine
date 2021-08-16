/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:25:48 by nick              #+#    #+#             */
/*   Updated: 2021/08/16 01:06:48 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	to_find_size;
	int	index;
	int	to_find_index;

	index = 0;
	to_find_size = 0;
	while (to_find[to_find_size])
		to_find_size++;
	if (to_find_size == 0)
		return (str);
	while (str[index])
	{
		to_find_index = 0;
		while (to_find[to_find_index] == str[index + to_find_index])
		{
			if (to_find_index == to_find_size - 1)
				return (str + index);
			to_find_index++;
		}
		index++;
	}
	return (0);
}
