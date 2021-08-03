#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
  int a;
  int b;

  a = 1;
  b = 2;
  printf("Before: a is %d & b is %d\n", a, b);
  ft_swap(&a, &b);
  printf("After: a is %d & b is %d\n", a, b);
}