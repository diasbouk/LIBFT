#include "../libft.h"
#include <stdio.h>
#include <string.h>


int	test_case(const char *desc, const char *s1, const char *s2, size_t n)
{
	int	res_t;
	int	res;

	printf("\n%s\n", desc);

	res_t = memcmp(s1, s2, n);
	res = ft_memcmp(s1, s2, n);

	printf("Expected -->	'%d'\n", res_t);
	printf("Got -->	'%d'\n", res);
	printf("%s\n", res_t == res ? PASSED : FAILED);
	return res_t == res ? 0 : -1;
}


int main(void)
{
	int	return_value = 0;

	if (test_case("Comparing two identical strings len as size", "source", "source", 6))
		return_value = -1;
	if (test_case("Comparing two identical strings size very large", "source", "source", 120))
		return_value = -1;
	if (test_case("Comparing different strings  len as size", "source", "sourne", 6))
		return_value = -1;
	if (test_case("Comparing different strings  size large", "source", "sourne", 68))
		return_value = -1;
	if (test_case("Comparing empty buffers ", "", "", 68))
				return_value = -1;
	if (test_case("Comparing empty buffers ", "sour", "sour", 0))
				return_value = -1;
	if (test_case("Comparing empty buffers ", "sour22", "sour23", 5))
				return_value = -1;
	return (return_value);
}
