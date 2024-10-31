#include "../libft.h"
#include <string.h>
#include <stdio.h>


int main(void)
{
	char src[8] = "ABCDEFG";
	src[7] = '\0';
	char *dest = src + 2;
	memcpy(src, dest, 3);
	printf("%s\n", dest);
	return (0);
}
