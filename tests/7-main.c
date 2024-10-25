#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char *str = ft_calloc(sizeof(char), 4);
	if (!str)
		return (0);
	printf("%s\n", str);
	strcpy(str, "Done");
	printf("%s\n", str);
	free(str);
	return (0);
}
