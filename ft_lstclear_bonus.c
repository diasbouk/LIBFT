#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
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
