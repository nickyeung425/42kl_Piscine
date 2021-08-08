#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_char_printable(char c)
{
    if (c > ' ' && c <= 126)
    {
        return 1;
    }
    return 0;
}

void ft_putstr_non_printable(char *str)
{
    while (*str)
    {
        if (is_char_printable(*str) == 1)
        {
            ft_putchar(*str);
        }
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[*str/16]);
            ft_putchar("0123456789abcdef"[*str%16]);
        }
        str++;
    }
}