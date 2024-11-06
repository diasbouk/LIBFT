#include "../libft.h"
#include <bsd/string.h>
#include <stdio.h>

void	test_case(const char *desc, char *src_val, size_t size)
{
	char	*dest;
	char	*dest_t;

	size_t exp;
	size_t got;

	printf("\n%s\n", desc);
	dest = ft_calloc(size, size + 1);
	if (!dest)
		return ;

	dest_t = ft_calloc(size, size + 1);
	if (!dest_t)
		return ;

	exp = strlcpy(dest_t, src_val, size);
	got = ft_strlcpy(dest, src_val, size);

	printf("Expected: %lu '%s'\n", exp, dest_t);
	printf("Got: %lu '%s'\n", got, dest);
	printf("%s\n", got == exp && memcmp(dest, dest_t, size) == 0 ? PASSED : FAILED);
	if (memcmp(dest, dest_t, size))
		printf("%d\n", memcmp(dest, dest_t, size));
}


int main(void)
{
	test_case("Testing regular case, regular strings", "Source string here", 19);
	test_case("Testing Source but size 0", "Source string here", 0);
	test_case("Testing Source empty string +  size 0", "", 0);
	//  FIX: Handle test down here FAIL
	//  NOTE: Add NULLs testing
	test_case("Testing Source empty string +  size > 0", "\0", 10);
	test_case("Testing Source empty string +  size > 0", "", 10);
	return (0);
}
