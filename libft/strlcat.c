/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 17:03:24 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/08 17:15:34 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_length;
	size_t src_length;
	size_t i;

	dst_length = ft_strlen(dst);
	stc_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	i = 0;
	while (dst_length + i < size -1)
	{
		if (src[i] == '\0')
			break ;
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	if (size < dst_length)
		return (src_length + size);
	else
		return (dst_lenght + src_length);
}
