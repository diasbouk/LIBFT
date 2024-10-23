#include "libft.h"
#include <stdio.h>

int main(void)
{
	const char *src = "This";
	char dest[5];
	ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
