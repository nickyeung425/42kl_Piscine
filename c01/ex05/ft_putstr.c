/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:41:10 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/02 21:43:24 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	current_char;

	if (str)
	{
		while (*str != '\0')
		{
			current_char = *str;
			write(1, &current_char, 1);
			++str;
		}
	}
}
