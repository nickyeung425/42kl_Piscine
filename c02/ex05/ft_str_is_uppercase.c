int ft_str_is_uppercase(char *str)
{
  int result;

  result = 1;
  while (*str)
  {
    if (!('A' <= *str && *str <= 'Z'))
    {
      result = 0;
      break;
    }
    str++;
  }

  return (result);
}