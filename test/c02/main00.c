#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
  char src[] = "123";
  char dest[] = "HelloWorld";
  printf("Src: %s\nDest: %s\n\n", src, dest);
  printf("Src: %s\nDest: %s\nReturn Result: %s\n\n", src, dest, ft_strcpy(dest, src));
}