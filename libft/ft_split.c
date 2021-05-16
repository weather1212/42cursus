/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:26:24 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/14 21:46:24 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char *s, char c)
{
	int	count;

	count = 0;
  while ((s = ft_strchr(s, c) + 1))
    count++;
	return (count);
}

char	*ft_strdup_sep(char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] && (s[i] != c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s, char c)
{
	int		i;
	char	**result;

	i = 0;
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
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
	result[i] = NULL;
	return (result);
}