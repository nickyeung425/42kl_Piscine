/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:20:13 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:20:13 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*a = "weraeraerw sdfasdf";
	int		string_count;

	string_count = ft_strlen(a);
	printf("a is %s\nCount is %d", a, string_count);
}
