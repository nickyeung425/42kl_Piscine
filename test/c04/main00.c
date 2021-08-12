#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Hello ";
	printf("c  : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));
}
