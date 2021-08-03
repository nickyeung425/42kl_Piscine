#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

void print_array(int numbers[], int size)
{
  for(int n = 0; n < size; n++)
  {
    printf("%d, ", numbers[n]);
  }
  printf("\n");
}

int main(void)
{
  int size = 10;
  int no_array[size];

  for(int n = 0; n < size; n++)
  {
    no_array[n] = 10-(n*n);
  }

  print_array(no_array, size);
  ft_sort_int_tab(no_array, size);
  print_array(no_array, size);
}