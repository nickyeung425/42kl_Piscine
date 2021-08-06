int ft_str_is_alpha(char *str)
{
  int result;

  result = 1;
  while (*str)
  {
    if (!(('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z')))
    {
      result = 0;
      break;
    }
    str++;
  }

  return (result);
}