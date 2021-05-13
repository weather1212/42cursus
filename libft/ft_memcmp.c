/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:00:25 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/13 21:19:22 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s1_temp;
	const unsigned char *s2_temp;

	s1_temp = s1;
	s2_temp = s2;
	while (n-- > 0 && (*s1_temp || *s2_temp))
	{
		if (*s1_temp == *s2_temp)
		{
			s1_temp++;
			s2_temp++;
		}
		else
			return (*s1_temp - *s2_temp);
	}
	return (0);
}
