char *ft_strupcase(char *str)
{
  int index;
  
  index = 0;
  while (str[index] != '\0')
  {
    if ('a' <= str[index] && str[index] <= 'z')
    {
      str[index] = str[index] - 32;
    }
    index++;
  }
  return str;
}