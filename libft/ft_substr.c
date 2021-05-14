/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 18:36:09 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/14 19:19:21 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	char *temp;

	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (!(result = malloc(sizeof(char) * len + 1)))
		return (NULL);
	temp = result;
	while (start-- > 0)
		s++;
	while (len-- > 0)
		*temp++ = *s++;
	*temp = '\0';
	return (result);
}
