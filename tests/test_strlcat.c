#include "../libft.h"
#include <stdio.h>


int main(void)
{
	char *src0 = "Test string to concate";
	char *dest = ft_calloc(sizeof(char), ft_strlen(src0) + 6);
	if (!dest)
		return (0);
	ft_strlcpy(dest, "GOT: ", 5);
	printf("%lu --> %s\n", ft_strlcat(dest, src0, ft_strlen(src0) + 15), dest);
	printf("Length of dest --> %lu\n", ft_strlen(dest));
	printf("Length of src --> %lu\n", ft_strlen(src0));
	free(dest);
	return (0);
}
