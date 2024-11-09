#include "../libft.h"
#include <stdio.h>
#include <string.h>


int	test_case(const char *desc, void *src, int c, size_t n)
{
	printf("\n%s\n", desc);
	void	*res;
	void	*res_t;

	res_t = memchr(src, c, n);
	printf("Std worked\n");
	res = ft_memchr(src, c, n);
	printf("Ft worked\n");

	printf("Expected -->	address: '%p' | Value '%s'\n", res_t , (char *)res_t);
	printf("Got -->	address: '%p' | Value '%s'\n", res , (char *)res);
	printf("%s\n", res_t == res ? PASSED : FAILED);
	return res_t == res ? 0 : -1;
}


int main(void)
{
	test_case("Case 1: Char in a string", "find y last y", 'y', 14);

	int	number = 1337;
	int number_1 = 0;
	int return_value = 0;
	if (test_case("Case 2: Byte in an int", &number, 57, 14))
		return_value  = -1;
	if (test_case("Case 2: Non existing byte in a number", &number, 12, 14))
		return_value  = -1;
	if (test_case("Case 2: Null byte in the middle of the chunk", "Strin\0gtest", 0, 14))
		return_value  = -1;
	if (test_case("Case 2: Null number and 0", &number_1, 0, 14))
	if (test_case("Case 2: Null number and non null byte", &number_1, 12, 14))
			return_value  = -1;
	printf("NULL as address shall SEGV !!\n");
	//   NOTE: NULL as address shall SEGV!?
	
	return (return_value);
}
