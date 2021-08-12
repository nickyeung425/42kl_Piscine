/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:22:17 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/12 16:10:04 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int	main(void)
{
	char	str_src[]	= "Hello";
	char	str_dest[]	= "Salut";
	char	str_dest2[]	= "Salut";

	printf("%s\n", strcpy(str_dest, str_src));
	printf("%s\n", str_dest);
	ft_strcpy(str_dest2, str_src);
	printf("%s\n", strcpy(str_dest2, str_src));
	printf("%s\n", str_dest2);
	return (0);
}
