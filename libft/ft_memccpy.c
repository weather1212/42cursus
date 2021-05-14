/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 18:42:40 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/14 16:09:46 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*result;
	const unsigned char	*src_temp;

	result = dst;
	src_temp = src;
	while (n-- > 0)
	{
		if (*src_temp == (unsigned char)c)
		{
			*result = *src_temp;
			return (++result);
		}
		*result++ = *src_temp++;
	}
	return (NULL);
}
