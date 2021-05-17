/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 19:12:59 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/17 16:02:39 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_temp;
	const char	*src_temp;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_temp = dst;
	src_temp = src;
	if (dst <= src)
	{
		while (len--)
			*dst_temp++ = *src_temp++;
	}
	else
	{
		dst_temp += len;
		src_temp += len;
		while (len--)
			*--dst_temp = *--src_temp;
	}
	return (dst);
}
