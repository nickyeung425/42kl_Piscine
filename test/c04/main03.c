#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;

	str = " ---+-+21474836478";
	printf("%d\n", ft_atoi(str));
}
