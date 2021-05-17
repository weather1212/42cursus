/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 19:58:03 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/17 20:34:39 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long_n;
	char ascii_num;

	long_n = n;
	if (long_n < 0)
	{
		write(fd, "-", 1);
		long_n = long_n * -1;
	}
	if (long_n >= 10)
	{
		ft_putnbr_fd(long_n / 10, fd);
		ft_putnbr_fd(long_n % 10, fd);
	}
	else
	{
		ascii_num = long_n + '0';
		write(fd, &ascii_num, 1);
	}
}
