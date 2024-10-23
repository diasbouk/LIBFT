#include <stdio.h>
#include "libft.h"

int main(void)
{
	const char *src;
	char dest[10] = "code";
	printf("%d\n", ft_strlen(dest));
	src = " code";
	printf("%d --> %s\n", ft_strlcat(dest, src, 10), dest);
	return (0);
}
