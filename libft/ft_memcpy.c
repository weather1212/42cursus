/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:21:46 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/13 22:35:56 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*result;
	const unsigned char	*src_temp;

	if (dst == NULL && src == NULL)
		return (NULL);
	result = dst;
	src_temp = src;
	while (n-- > 0)
		*result++ = *src_temp++;
	return (dst);
}
