/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:28:52 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/18 17:50:29 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size;

	if (lst != NULL)
		size = 1;
	else
		return (0);
	while (lst)
	{
		if (lst->next)
		{
			lst = lst->next;
			size++;
		}
		else
			break ;
	}
	return (size);
}
