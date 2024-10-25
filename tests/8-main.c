#include "libft.h"
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	const char *str = "Copy this string";
	char *buff = ft_strdup(str);
	if (!buff)
	{
		printf("Failed to allocate or some sht happend figure it out\n");
		return (0);
	}
	printf("%s\n", buff);
	free(buff);
	printf("Freed\n");
	return (0);
}

