
#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(void)
{
  printf("%d\n", ft_str_is_numeric("123"));
  printf("%d\n", ft_str_is_numeric("!@#@123"));
  return (0); 
}