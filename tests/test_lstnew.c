#include "../libft.h"
#include <stdio.h>


int main(void)
{
	char *s = "Content";
	t_list	*node = ft_lstnew(s);
	if (!node)
	{
		printf("Node creation failed\n");
		return (0);
	}
	printf("%s\n", (char *)node->content);
}
