#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	number;
	int	result;
	int	count;
	int	size;

	number = 0;
	count = 0;
	size = 100;
	while (number <= size)
	{
		result = ft_is_prime(number);
		printf("is_prime(%d) = %d\n", number, result);
		number++;
		if (result)
			count++;
	}
	printf("first %d number, %d prime\n", size, count);
	number = 140052317;
	result = ft_is_prime(number);
	printf("is_prime(%d) = %d\n", number, result);
	number = 2147483646;
	result = ft_is_prime(number);
	printf("is_prime(%d) = %d\n", number, result);
	number = 2147483647;
	result = ft_is_prime(number);
	printf("is_prime(%d) = %d\n", number, result);

	return (0);
}
