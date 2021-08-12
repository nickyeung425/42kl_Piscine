int	check_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	negative;
	int	index;

	result = 0;
	negative = 1;
	index = 0;
	while (check_space(str[index]) == 1)
	{
		index++;
	}
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative *= -1;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return (result * negative);
}
