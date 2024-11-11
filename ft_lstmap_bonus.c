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

	if (!lst || !f || !del)
		return (NULL);
	new_node = ft_lstnew(lst->content);
	if (!new_node)
	{
		ft_lstclear(&new_node, del);
		return (NULL);
	}
	new_list_head = new_node;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_list_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list_head, new_node);
		lst = lst->next;
	}
	return (new_node);
}
