/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:32:36 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/02 21:39:25 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int *div;
	int *mod;

	*div = *a / *b;
	*mod = *a % *b;
	*a = *div;
	*b = *mod;
}
