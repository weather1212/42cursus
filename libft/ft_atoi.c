/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 17:02:54 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/13 17:19:06 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(char space)
{
	if (space == ' ' || space == '\t' || space == '\n' ||
			space == '\v' || space == '\f' || space == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int sign;
	int result_num;

	sign = 1;
	result_num = 0;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str)
	{
		if ('0' <= *str && *str <= '9')
			result_num = (result_num * 10) + (*str - '0');
		else
			break ;
		str++;
	}
	result_num *= sign;
	return (result_num);
}
