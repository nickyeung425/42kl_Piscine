/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:29:05 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 16:15:16 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str_valid;
	char	*str_invalid;

	str_valid = "Hello";
	str_invalid = "Hell0";
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
}
