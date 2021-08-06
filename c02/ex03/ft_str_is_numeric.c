int ft_str_is_numeric(char *str)
{
  int result;

  result = 1;
  while (*str)
  {
    if (!('0' <= *str && *str <= '9'))
    {
      result = 0;
      break;
    }
    str++;
  }

  return (result);
}