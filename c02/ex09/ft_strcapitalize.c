char *ft_strcapitalize(char *str)
{
  int index;
  int caps;

  index = 1;
  while(str[index] != '\0')
  {
    if (('a' <= str[index] && str[index] <= 'z') || ('A' <= str[index] && str[index] <= 'Z')  || ('0' <= str[index] && str[index] <= '9'))
    {
      if (caps == 1 && 'a' <= str[index] && str[index] <= 'z')
      {
        str[index] = str[index] - 32;
      }
      else if (caps == 0 && 'A' <= str[index] && str[index] <= 'Z')
      {
        str[index] = str[index] + 32;
      }
      caps = 0;
    }
    else
    {
      caps = 1;
    }
    index++;
  }

  return str;
}