/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:26:06 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:26:27 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	test[10];

	test[0] = 'H';
	test[1] = 'e';
	test[2] = 'L';
	test[3] = 'l';
	test[4] = 'o';
	test[5] = '1';
	test[6] = '2';
	test[7] = '#';
	test[8] = '$';
	test[9] = 'n';
	printf("%s\n", test);
	printf("%s\n", ft_strlowcase(test));
	return (0);
}
