/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:22:49 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/18 20:05:47 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*str1 = "abcDe";
	char	*str2 = "abcDz";

	printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
}
