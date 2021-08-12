/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:22:54 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 17:16:54 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*str1 = "dsasd";
	char	*str2 = "dsaseas";
	int		size = 50;

	printf("c  : %d\n", strncmp(str1, str2, size));
	printf("ft : %d\n", ft_strncmp(str1, str2, size));
}
