/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:21:03 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/31 15:48:43 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void delete(void *data)
{
	free(data);
	data = NULL;
}

int main(void)
{
	/*Data creation*/
	char *first_data = ft_strdup("first node");
	char *second_data = ft_strdup("second node");
	char *last_data = ft_strdup("Last one node");
	t_list *first = ft_lstnew(first_data);
	t_list *second = ft_lstnew(second_data);
	t_list *last = ft_lstnew(last_data);
	t_list	*temp;

	/*Lst size count test*/
	printf("\nTest 1: Size test + Adding new nodes\n");
	printf("List size before --> %d\n", ft_lstsize(first));

	/*Lst add front test*/
	printf("Adding new node -> second\n");
	ft_lstadd_front(&second, first);
	printf("List size after adding second --> %d\n", ft_lstsize(first));
	temp = first;
	printf("All Nodes starting from first:\n");
	while (temp)
	{
		printf("==> %s\n", (char *)temp->content);
		temp = temp->next;
	}
	t_list *last_node = ft_lstlast(first);
	printf("Last node starting from first -->  ");
	printf("%s\n", (char *)last_node->content);

	/*Lst add last test*/
	printf("\nTest 2: Adding at the end\n");
	printf("Adding last 3rd node at the end of -> first\n");
	ft_lstadd_back(&first, last);
	printf("Last node -->  ");
	last_node = ft_lstlast(first);
	printf("%s\n", (char *)last_node->content);
	printf("List size after adding last 3rd  node--> %d\n", ft_lstsize(first));
	temp = first;
	printf(" All Nodes:\n");
	while (temp)
	{
		printf("==> %s\n", (char *)temp->content);
		temp = temp->next;
	}

	/*Deleone node function tests*/
	printf("\nTest 3: Deleting a single node\n");
	printf("After deleting the last node\n");
	ft_lstdelone(last, delete);

	if (last || second->next)
		printf("NODE NOT DELETED !!!\n");
	printf("List size After removing last  --> %d\n", ft_lstsize(first));
	temp = first;
	printf(" All Nodes:\n");
	while (temp)
	{
		if (temp && temp->content)
			printf("==> %s\n", (char *)temp->content);
		temp = temp->next;
	}

	return (0);

}
