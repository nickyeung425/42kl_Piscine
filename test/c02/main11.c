void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}