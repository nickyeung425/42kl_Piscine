/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:43:59 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/02 21:45:50 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char * str)
{
	int count;
	
	count = 0;
	if (str)
	{
		while(*str != '\0')
		{
			count++;
			++str;
		}
	}

	return count;
}