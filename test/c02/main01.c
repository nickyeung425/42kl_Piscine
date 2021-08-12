/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:29:25 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 16:14:25 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	dest[20];
	int		size;

	src = "Hello World";
	size = 8;
	printf("base   : %s\n", src);
	strncpy(dest, src, size);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, size);
	printf("ft_cpy : %s\n", dest);
}
