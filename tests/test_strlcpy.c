#include "../libft.h"
#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	char dest0[10];
	ft_bzero(dest0, 10);
	/*char stddest0[10];*/
	char *src0 = "Test source string";
	/*char *stdsrc0 = "Test source string";*/
	/*printf("strlcpy(dest0, src0, 10) --> %lu - %s\n", strlcpy(dest0, src0, 10), dest0);*/
	printf("ft_strlcpy(dest0, src0, 18) --> %lu - %s\n", ft_strlcpy(dest0, src0, 18), dest0);
	ft_bzero(dest0, 10);
	printf("ft_strlcpy(dest0, src0, 22) --> %lu - %s\n", ft_strlcpy(dest0, src0, 22), dest0);
	ft_bzero(dest0, 10);
	printf("ft_strlcpy(dest0, src0, 10) --> %lu - %s\n", ft_strlcpy(dest0, src0, 10), dest0);
	ft_bzero(dest0, 10);
	printf("ft_strlcpy(dest0, src0, 0) --> %lu - %s\n", ft_strlcpy(dest0, src0, 0), dest0);
	ft_bzero(dest0, 10);
	printf("ft_strlcpy(dest0, src0, 2) --> %lu - %s\n", ft_strlcpy(dest0, src0, 2), dest0);
	printf("End of tests\n");
	return (0);
}
