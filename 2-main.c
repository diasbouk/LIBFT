#include "libft.h"
#include <stdio.h>


int main(void)
{
	const char *str = "String to cpy into the dest!";
	char dest[28];
	ft_memcpy(dest, str, 28);
	printf("%s\n", dest);
	return (0);
}
