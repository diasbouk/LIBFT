#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *source = "foo bar l3fo foo lilah";
	const char *little = "lilah";
	char *found = ft_strnstr(source, little, 21);
	if (!found)
	{
		printf("Not found\n");
		return (0);
	}
	printf("%s\n", found);
	return (0);
}
