
#include <stdio.h>

int ft_str_is_printable(char *str)
{
  int result;

  result = 1;
  while (*str)
  {
    if (*str <= ' ')
    {
      result = 0;
      break;
    }
    str++;
  }

  return result;
}