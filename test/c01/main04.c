#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
  int a;
  int b;

  a = 47;
  b = 3;

  printf("Before: a is %d & b is %d \n", a, b);
  ft_ultimate_div_mod(&a, &b);
  printf("After: a is %d & b is %d \n", a, b);


  a = 47;
  b = 0;

  printf("Before: a is %d & b is %d \n", a, b);
  ft_ultimate_div_mod(&a, &b);
  printf("After: a is %d & b is %d \n", a, b);
}