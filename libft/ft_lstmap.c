/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoyu <hoyu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:37:10 by hoyu              #+#    #+#             */
/*   Updated: 2021/05/18 22:32:55 by hoyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *list;
	t_list *head;

	if (!lst)
		return (NULL);
	if (!(list = ft_lstnew((*f)(lst->content))))
		return (NULL);
	head = list;
	lst = lst->next;
	while (lst)
	{
		if (!(list->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		list = list->next;
		lst = lst->next;
	}
	return (head);
}
