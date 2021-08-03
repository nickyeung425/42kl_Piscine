#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
  char *a = "Hello this is printed";

  printf("a is %s\n", a);
  ft_putstr(a);
}