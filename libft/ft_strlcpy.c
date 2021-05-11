/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 20:13:00 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/11 17:51:56 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t result;

	result = ft_strlen(src);
	if (dstsize == 0)
		return (result);
	while (*src && (--dstsize > 0))
		*dst++ = *src++;
	*dst = '\0';
	return (result);
}
