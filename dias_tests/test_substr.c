#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int    test_case(const char *desc, char *str, unsigned int start, size_t len)
{
	char	*res;

	printf("\n%s\n", desc);
	res = ft_substr(str, start, len);
	if (!res)
		return (-1);
	printf("ft\n");
	printf("Got ;'%s'\n", res);
	free(res);

	return (0);
}

int main(void)
{
    test_case("Case regular str ", "Str to find", 4, 11);
    test_case("Case out of b start ", "Str to find", 33, 11);
    test_case("Case len too long ", "Str to find", 4, 110);
    test_case("Case both long", "Str to find", 44, 110);
    return (0);
}
