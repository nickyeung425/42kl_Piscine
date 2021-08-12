/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:29:25 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 18:37:57 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	int		size = 20;
	char	dest[size];

	src = "Hello World";
	printf("base   : %s\n", src);
	strncpy(dest, src, size);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, size);
	printf("ft_cpy : %s\n", dest);
	printf("base : %s\n", src);
}
