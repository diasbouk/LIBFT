#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\nTestings regular memecpy between strings\n");
	char	dest0[10];
	char	src0[10] = "Test str";
	char	stddest0[10];
	char	stdsrc0[10] = "Test str";
	ft_bzero(dest0, 10);
	ft_bzero(stddest0, 10);
	ft_memcpy(dest0, src0, 9);
	memcpy(stddest0, stdsrc0, 9);
	printf("ft_memcpy(dest0, src0, 9) --> dest = '%s'\n", dest0);
	printf("memcpy(stddest0, stdsrc0,  9) --> stddest = '%s'\n", stddest0);
	printf("TEST %s\n", memcmp(dest0, stddest0, 10) == 0 ? "PASSED": "FAILED");

	printf("\nTestings Copying from NULL to an allocated chunk\n");
	char	dest1[10];
	char	stddest1[10];
	ft_bzero(dest1, 10);
	ft_bzero(stddest1, 10);
	printf("It shall SEGF !!!\n");

	printf("\nTestings copying from string to int\n");
	int	dest2[12];
	char	src2[12] = {12, 13, 14, 15, 16, 12, 13, 14, 15, 16, 12, 13};
	int	stddest2[12];
	char	stdsrc2[12] = {12, 13, 14, 15, 16, 12, 13, 14, 15, 16, 12, 13};
	ft_bzero(dest2, 10);
	ft_bzero(stddest2, 10);
	ft_memcpy(dest2, src2, 12);
	memcpy(stddest2, stdsrc2, 12);
	printf("ft_memcpy(dest2, src2, 12) --> dest = '%d, %d, %d'\n", dest2[0], dest2[1], dest2[2]);
	printf("memcpy(stddest2, stdsrc2,  12) --> stddest = '%d, %d, %d'\n", stddest2[0], stddest2[1], stddest2[2]);
	printf("TEST %s\n", memcmp(dest2, stddest2, 12) == 0 ? "PASSED": "FAILED");


	printf("\nTestint copying from valid source to NULL\n");
	/*memcpy(NULL, src0, 10);*/
	/*ft_memcpy(NULL, src0, 10);*/
	printf("It shall segfault\n");


	printf("\nTestings copying from large string to small chunk\n");
	char	dest3[3];
	char	stddest3[3];
	char	src3[100] = "Large string here";
	char	stdsrc3[100] = "Large string here";
	ft_bzero(dest3, 10);
	ft_bzero(stddest3, 10);
	memcpy(stddest3, stdsrc3, 13);
	ft_memcpy(dest3, src3, 13);
	printf("ft_memcpy(dest3, src3, 13) --> dest = '%s'\n",dest3);
	printf("memcpy(stddest3, stdsrc3,  13) --> stddest = '%s'\n",stddest3);
	printf("TEST %s\n", memcmp(dest3, stddest3, 10) == 0 ? "PASSED": "FAILED");


	printf("\nTestings copying btween close memory areas (overlap)\n");
	char	src4[20] = "Large string here";
	char	stdsrc4[20] = "Large string here";
	ft_memcpy(src4 + 3, src4, 17);
	memcpy(stdsrc4 + 3, stdsrc4, 17);
	printf("ft_memcpy(src4, src4 + 2, 14) --> dest = '%s'\n",src4 + 3);
	/*Std memcpy doesen't handles memory overlap , but our ft_memcpy should overlap*/
	printf("memcpy(src4, src4 + 2, 14) --> stddest = '%s'\n",stdsrc4 + 3);
	printf("TEST %s\n", memcmp(src4 + 3, stdsrc4 + 3, 10) != 0 ? "PASSED": "FAILED");


	printf("\nTestings copying btween close memory areas (overlap)\n");
	char	src5[20] = "Large string here";
	char	stdsrc5[20] = "Large string here";
	ft_memcpy(src5, src5 + 3, 17);
	memcpy(stdsrc5, stdsrc5 + 3, 17);
	printf("ft_memcpy(src5, src5 + 2, 15) --> dest = '%s'\n",src5);
	printf("memcpy(src5, src5 + 2, 15) --> stddest = '%s'\n",stdsrc5);
	printf("TEST %s\n", memcmp(stdsrc5, stdsrc5, 10) == 0 ? "PASSED": "FAILED");

	return (0);
}
