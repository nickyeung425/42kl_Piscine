/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:24:10 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 17:13:51 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(void)
{
	char	*string;

	string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(string, 1500);
}
