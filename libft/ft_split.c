/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:26:24 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/19 16:02:01 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	if (*s)
	{
		if (s[0] != c)
			count++;
		i = 1;
		while (s[i])
		{
			if ((s[i] != c) && (s[i - 1] == c))
				count++;
			i++;
		}
	}
	return (count);
}

char	*ft_strdup_sep(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	if (!(word = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && (s[i] != c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	result = 0;
	i = 0;
	if (s)
	{
		if (!(result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
			return (NULL);
		while (*s)
		{
			while (*s && (*s == c))
				s++;
			if (*s && (*s != c))
			{
				result[i] = ft_strdup_sep(s, c);
				while (*s && (*s != c))
					s++;
				i++;
			}
		}
	}
	result[i] = NULL;
	return (result);
}
