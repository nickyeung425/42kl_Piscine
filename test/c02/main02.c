#include <stdio.h>

int ft_str_is_alpha(char *str);
int main(void)
{
  printf("%d\n", ft_str_is_alpha("abc"));
  printf("%d\n", ft_str_is_alpha("abc123"));
  return (0); 
}