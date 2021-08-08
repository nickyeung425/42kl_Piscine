int ft_str_is_lowercase(char *str)
{
  int result;

  result = 1;
  while (*str)
  {
    if (!('a' <= *str && *str <= 'z'))
    {
      result = 0;
      break;
    }
    str++;
  }

  return (result);
}