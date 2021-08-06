char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  int index;

  index = 0;
  while (index < n){
    dest[index] = src[index];
    index++;
  }

  dest[index] = '\0';
  return dest;
}