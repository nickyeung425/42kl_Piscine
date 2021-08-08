char *ft_strlowcase(char *str)
{
  int index;
  
  index = 0;
  while (str[index] != '\0')
  {
    if ('A' <= str[index] && str[index] <= 'Z')
    {
      str[index] = str[index] + 32;
    }
    index++;
  }
  return str;
}