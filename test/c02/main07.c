
#include <stdio.h>
char *ft_strupcase(char *str);
int main(void)
{
  char test[10];
  test[0] = 'H';
  test[1] = 'e';
  test[2] = 'L';
  test[3] = 'l';
  test[4] = 'o';
  test[5] = '1';
  test[6] = '2';
  test[7] = '#';
  test[8] = '$';
  test[9] = 'N';

  printf("%s\n", test);
  printf("%s\n", ft_strlowcase(test));
  return (0); 
}