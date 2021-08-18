/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeung <wyeung@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 00:57:53 by wyeung            #+#    #+#             */
/*   Updated: 2021/08/18 18:59:27 by wyeung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_condition(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	caps;

	index = 1;
	caps = 1;
	while (str[index] != '\0')
	{
		if (check_condition(str[index]) == 1)
		{
			if (caps == 1 && 'a' <= str[index] && str[index] <= 'z')
				str[index] = str[index] - 32;
			else if (caps == 0 && 'A' <= str[index] && str[index] <= 'Z')
				str[index] = str[index] + 32;
			caps = 0;
		}
		else
			caps = 1;
		index++;
	}
	return (str);
}
