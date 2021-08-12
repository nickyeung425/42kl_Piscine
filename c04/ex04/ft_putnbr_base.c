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

int	check_base_str(char *str)
{
	int	index;
	int	compare_index;

	index = 0;
	compare_index = 0;
	while (str[index])
	{
		if (str[index] <= 32 || str[index] == '+' || str[index] == '-' )
			return (0);
		compare_index = index + 1;
		while (str[compare_index])
		{
			if (str[index] == str[compare_index])
				return (0);
			compare_index++;
		}
		index++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(int nbr, int base_int, char *base)
{
	if (nbr > base_int)
	{
		ft_putnbr_base_recursive(nbr / base_int, base_int, base);
	}
	if (nbr < 0)
	{
		ft_print('-');
		ft_putnbr_base_recursive((nbr / base_int) * -1, base_int, base);
	}
	if (nbr > 0)
	{
		ft_print(base[nbr % base_int]);
	}
	else
	{
		ft_print(base[((nbr % base_int) * -1)]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	index;

	index = 0;
	if (check_base_str(base) == 1)
	{
		base_size = ft_strlen(base);
		ft_putnbr_base_recursive(nbr, base_size, base);
	}
}
