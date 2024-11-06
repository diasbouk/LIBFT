#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;

	while (lst)
	{
		new_list = ft_lstnew(lst->content);
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (NULL);
}
