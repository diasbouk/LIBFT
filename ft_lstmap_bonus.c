/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:06:05 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/09 14:06:09 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list_head;
	t_list	**lst_head;

	if (!lst || !f || !del)
		return (NULL);
	new_node = ft_lstnew(f(lst->content));
	if (!new_node)
	{
		ft_lstclear(&new_node, del);
		return (NULL);
	}
	new_list_head = new_node;
	lst_head = &new_node;
	while (lst->next)
	{
		lst = lst->next;
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstdelone(new_node, del);
			ft_lstclear(lst_head, del);
			return (NULL);
		}
		ft_lstadd_back(lst_head, new_node);
	}
	return (new_list_head);
}
