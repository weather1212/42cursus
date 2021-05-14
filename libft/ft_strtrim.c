/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:40:16 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/14 21:08:13 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	result = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1) - 1;
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end] && ft_strchr(set, s1[end]) && end > start)
			end--;
		if (!(result = malloc(sizeof(char) * (end - start + 1) + 1)))
			return (NULL);
		ft_strlcpy(result, &s1[start], ((end - start + 1) + 1));
	}
		return (result);
}
