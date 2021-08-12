/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:27:27 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 16:16:58 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str_valid;
	char	*str_invalid;

	str_valid = "hello";
	str_invalid = "hellO";
	printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));
}
