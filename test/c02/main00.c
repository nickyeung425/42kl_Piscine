/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:22:17 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 15:45:11 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "123";
	char	dest[] = "HelloWorld";

	printf("Src: %s\nDest: %s\n\n", src, dest);
	printf("Src: %s\nDest: %s\nReturn Result: %s\n\n", src, dest, ft_strcpy(dest, src));
}
