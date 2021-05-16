#include "libft.h"

void  ft_numlen(int n, int *length)
{
  if (n  == 0)
    return ;
  (*length)++;
  ft_numlen(n / 10, length);
}

void ft_conv_dec(int n, char *result, int index)
{
  if (n >= 10)
    ft_conv_dec(n / 10, result, index - 1);
	result[index] = (n % 10) + 48;
}

char *ft_itoa(int n)
{
  char *result;
  int length;

  length = 0;
  if (n == 0)
    length = 1;
  else
    ft_numlen(n, &length);
  if (n < 0)
    length++;
  result = malloc(sizeof(char) * (length + 1));
  if(n < 0)
  {
    result[0] = '-';
    n *= -1;
  }
  ft_conv_dec(n, result, length - 1);
  result[length] = '\0';
  return (result);
}