#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	print_nbr(int n)
{
	if (n >= 10)
	{
		print_nbr(n / 10);
		print_nbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

int	last_one(int n)
{
	if (n == 1)
		return (9);
	else if (n == 2)
		return (89);
	else if (n == 3)
		return (789);
	else if (n == 4)
		return (6789);
	else if (n == 5)
		return (56789);
	else if (n == 6)
		return (456789);
	else if (n == 7)
		return (3456789);
	else if (n == 8)
		return (23456789);
	else
		return (123456789);
}

void	main_loop(int n, int max_n, int prefix, int padding)
{
	int	count;

	if (n == 0)
	{
		if (padding == 1)
			ft_putchar('0');
		print_nbr(prefix);
		if (prefix != last_one(max_n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	else
	{
		count = 0;
		while (count <= 9)
		{
			if (((prefix % 10) < count))
			{
				main_loop(n - 1, max_n, 0 + (prefix * 10) + count, padding);
			}
			count++;
		}
	}
}

void	ft_print_combn(int n)
{
	if (n > 1)
	{
		main_loop(n - 1, n - 1, 0, 1);
		ft_putchar(',');
		ft_putchar(' ');
	}
	main_loop(n, n, 0, 0);
}
