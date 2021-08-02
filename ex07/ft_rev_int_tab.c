/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 21:46:28 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/02 21:49:39 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int new_a;
	int new_b;

	count = 0;
	while (count < size/2)
	{
		new_a = tab[count];
		new_b = tab[size-count-1];
		tab[count] = new_b;
		tab[size-count-1] = new_al
		count++;
	}
}
