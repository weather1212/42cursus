/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 18:29:03 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/28 14:17:53 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_list;

	temp_list = *lst;
	while (*lst)
	{
		*lst = temp_list->next;
		ft_lstdelone(temp_list, del);
		temp_list = *lst;
	}
}
