/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:07:33 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/09 13:07:36 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !(*lst) || !del)
		return ;
	temp = *lst;
	while (*lst)
	{
		temp = *lst;
		ft_lstdelone(temp, del);
		*lst = (*lst)->next;
	}
}
