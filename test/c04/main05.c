#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
}
