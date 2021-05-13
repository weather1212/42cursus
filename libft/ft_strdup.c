/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 21:51:09 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/13 22:10:25 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	char	*temp;
	size_t	length;

	length = ft_strlen(s1);
	if (!(result = malloc((sizeof(char) * length) + 1)))
		return (NULL);
	temp = result;
	while (*s1)
		*temp++ = *s1++;
	*temp = '\0';
	return (result);
}
