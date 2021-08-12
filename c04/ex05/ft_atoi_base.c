#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}
