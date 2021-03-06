/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:03:24 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/17 20:38:19 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_length;
	size_t src_length;
	size_t i;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	else if (size < dst_length)
		return (src_length + size);
	else
	{
		i = 0;
		while (src[i] && (dst_length + i < size - 1))
		{
			dst[dst_length + i] = src[i];
			i++;
		}
		dst[dst_length + i] = '\0';
		return (dst_length + src_length);
	}
}
