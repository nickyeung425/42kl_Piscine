#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
  char a[50];
  
  a[0] = 'H';
  a[1] = 'E';
  a[2] = 'L';
  a[3] = 'L';
  a[4] = 'O';
  printf("a is %s\n", a);
  ft_putstr(a);
}