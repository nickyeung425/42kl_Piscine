/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:18:18 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/11 01:18:19 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 47;
	b = 3;
	div = 0;
	mod = 0;
	printf("Before: a is %d & b is %d & div is %d & mod is %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("After: a is %d & b is %d & div is %d & mod is %d\n", a, b, div, mod);
}
