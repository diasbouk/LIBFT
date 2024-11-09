#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\nTestings copying btween close memory areas (overlap)\n");
	char	src4[20] = "Large string here";
	char	stdsrc4[20] = "Large string here";
	ft_memmove(src4 + 3, src4, 17);
	memmove(stdsrc4 + 3, stdsrc4, 17);
	printf("ft_memmove(src4, src4 + 2, 14) --> dest = '%s'\n",src4 + 3);
	/*Ft_memmove should handle overlaps*/
	printf("memmove(src4, src4 + 2, 14) --> stddest = '%s'\n",stdsrc4 + 3);
	printf("TEST %s\n", memcmp(src4 + 3, stdsrc4 + 3, 10) == 0 ? "PASSED": "FAILED");


	printf("\nTestings copying btween close memory areas (overlap)\n");
	char	src5[20] = "Large string here";
	char	stdsrc5[20] = "Large string here";
	ft_memmove(src5, src5 + 3, 17);
	memmove(stdsrc5, stdsrc5 + 3, 17);
	printf("ft_memmove(src5, src5 + 2, 15) --> dest = '%s'\n",src5);
	printf("memmove(src5, src5 + 2, 15) --> stddest = '%s'\n",stdsrc5);
	printf("TEST %s\n", memcmp(stdsrc5, stdsrc5, 10) == 0 ? "PASSED": "FAILED");

	printf("\nTestings copying same chunk to itself\n");
	char	src6[20] = "Large string here";
	char	stdsrc6[20] = "Large string here";
	ft_memmove(src6, src6, 17);
	memmove(stdsrc6, stdsrc6, 17);
	printf("ft_memmove(src6, src6 + 2, 16) --> dest = '%s'\n",src6);
	printf("memmove(src6, src6 + 2, 16) --> stddest = '%s'\n",stdsrc6);
	printf("TEST %s\n", memcmp(stdsrc6, stdsrc6, 10) == 0 ? "PASSED": "FAILED");
	printf("For NULL  -- same behaviour as ft_memcpy\n");

	/*This part --> SEGV*/
	/*memmove(NULL, src6, 12);*/
	/*ft_memmove(NULL, src6, 12);*/
	/*memmove(src6, NULL, 12);*/
	/*ft_memmove(src6, NULL, 12);*/

}
