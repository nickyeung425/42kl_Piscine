#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
  char *a = "weraeraerw sdfasdf";
  int string_count;
  
  string_count = ft_strlen(a);
  printf("a is %s\nCount is %d", a, string_count);
}