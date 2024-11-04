#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	test_case(char *desc, char *src_val, char *dest_val, size_t src_len, size_t dest_len, size_t n)
{
	char *src;
	char *dest;

	char *src_t;
	char *dest_t;

	size_t expected;
	size_t got;

	printf("\n%s\n", desc);
	src = ft_strdup(src_val);
	dest = ft_calloc(src_len + dest_len + 1, sizeof(char));
	ft_strlcpy(dest, dest_val, dest_len + 1);
	if (!src || !dest)
		return (10);


	src_t = ft_strdup(src_val);
	dest_t = ft_calloc(src_len + dest_len + 1, sizeof(char));
	ft_strlcpy(dest_t, dest_val, dest_len + 1);
	if (!src_t || !dest_t)
		return (10);

	got = ft_strlcat(dest, src, n);
	expected = strlcat(dest_t, src_t, n);

	printf(" Expected : %lu --> '%s'\n", expected, dest_t);
	printf(" Got : %lu --> '%s'\n", got, dest);
	printf("TEST %s\n", expected == got && ft_memcmp(dest, dest_t, dest_len) == 0 ? PASSED : FAILED);
	if (expected != got && ft_memcmp(dest, dest_t, dest_len) != 0)
		return (-1);
	free(src);
	free(dest);
	free(src_t);
	free(dest_t);
	return (0);
}


int main(void)
{
	int return_value = 0;
	if (test_case("Testing regular strlcat for allocated chunks", "source", "dest ", 6, 5, 12))
		return_value = -1;
	if (test_case("Testing size 0", "source", "dest ", 6, 5, 0))
		return_value = -1;
	if (test_case("Testing size 0", "source", "dest ", 67, 35, 0))
		return_value = -1;
	if (test_case("Testing size 0", "source", "dest ", 3, 35, 0))
		return_value = -1;
	if (test_case("testing large size", "source", "dest ", 6, 5, 22))
		return_value = -1;
	if (test_case("Testing with source or dest as NULL string --> FUNCTION SHOULD SEGV", NULL, NULL, 6, 5, 12))
		return_value = -1;
	if (test_case("Testin with source very large ,  small size for dest", "source source source source", "dest", 28, 5, 11))
		return_value = -1;
	if (test_case("Testin with very small chunk dest", "source source source source", "dest", 28, 5, 3))
		return_value = -1;
	if (test_case("Testin src valid dest null size 0", "source source source source", NULL, 28, 5, 0))
		return_value = -1;
	if (test_case("Testin with large space on dest ", "source source source source", "dest", 28, 35, 3))
		return_value = -1;
	return (return_value);
}
