/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:25:15 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 17:10:55 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*string1;
	int		size = 14;
	char	string2[size];

	string1 = "16zKlNCROAXIVG";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, size);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, size);
	printf("cpy ft : %s\n", string2);
}
