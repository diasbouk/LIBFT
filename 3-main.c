#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char	*src;

	src = (char *)malloc(sizeof(char) * 8);
	if (!src)
		return (0);
	ft_strcpy(src, "Code cod");
	printf("%s\n", src);
	ft_memmove(src + 3, src, 3);
	printf("%s\n", src);
	free(src);
	return (0);
}
