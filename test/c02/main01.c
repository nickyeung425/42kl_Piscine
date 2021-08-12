/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:29:25 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 02:40:23 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src = "Testing string";
	char	dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "This is tutorialspoint.com");
	printf("result from function: %s", strncpy(dest, src, 10));
	printf("Final copied string : %s\n", dest);
	return (0);
}
