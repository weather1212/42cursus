/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:34:53 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/17 16:00:20 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_numlen(long long_n, int *length)
{
	if (long_n == 0)
		return ;
	(*length)++;
	ft_numlen(long_n / 10, length);
}

void	ft_conv_dec(long long_n, char *result, int index)
{
	if (long_n >= 10)
		ft_conv_dec(long_n / 10, result, index - 1);
	result[index] = (long_n % 10) + 48;
}

char	*ft_itoa(int n)
{
	long	long_n;
	char	*result;
	int		length;

	long_n = n;
	length = 0;
	if (long_n == 0)
		length = 1;
	else
		ft_numlen(long_n, &length);
	if (long_n < 0)
		length++;
	if (!(result = malloc(sizeof(char) * (length + 1))))
		return (NULL);
	if (long_n < 0)
	{
		result[0] = '-';
		long_n *= -1;
	}
	ft_conv_dec(long_n, result, length - 1);
	result[length] = '\0';
	return (result);
}
