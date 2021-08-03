#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
  int a;

  a = 1;
  printf("Before: a is %d\n", a);
  ft_ft(&a);
  printf("After: a is %d\n", a);
}