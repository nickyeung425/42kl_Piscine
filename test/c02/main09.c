/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:25:20 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 17:07:31 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	*str_base;
	char	str_cap[60];
	int		index;

	// str_base = "salut, c0mment tu vas ? 42mots quarante-deux; cinquante+et+un";
	str_base = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	index = 0;
	while (index < 61)
	{
		str_cap[index] = str_base[index] + 0;
		index++;
	}
	ft_strcapitalize(&str_cap[0]);
	printf("%s\n", str_cap);
}
