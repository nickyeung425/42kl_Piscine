
#include <stdio.h>
int ft_str_is_printable(char *str);
int main(void)
{
  printf("%d\n", ft_str_is_printable("A231@##$@#$EGEFVdFASF@S"));
  printf("%d\n", ft_str_is_printable("sdf232 \\"));
  return (0); 
}