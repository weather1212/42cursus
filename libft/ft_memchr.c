/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 20:48:53 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/13 20:59:36 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*result;

	result = s;
	while (n-- > 0 && *result)
	{
		if (*result == (unsigned char)c)
			return ((void *)result);
		result++;
	}
	return (NULL);
}
