#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	test_case(const char *desc, char *big, char *little, size_t len)
{
	char *res_t;
	char *res;

	printf("\n%s\n", desc);

	res_t = strnstr(big, little, len);
	printf("Std worked\n");
	res = ft_strnstr(big, little, len);
	printf("Ft worked\n");
	printf("Expected : '%s'\n", res_t);
	printf("Got : '%s'\n", res);
	printf("%s\n", res_t == res ? PASSED : FAILED);
	if (res_t != res)
		return (-1);
	return (0);
}


int main(void)
{
	int	return_value = 0;
	if (test_case("Case 1: Valid big and little + len is size of big", "Foo Bar Baz", "Baz", 12))
		return_value = -1;
	if (test_case("Case 2: Valid big and little + len is smaller than rang of little", "Foo Bar Baz", "Baz", 5))
		return_value = -1;
	if (test_case("Case 3: valid strings + very large length", "Foo Bar Baz", "Baz", 53))
		return_value = -1;
	if (test_case("Case 3: little not in source", "Foo Bar Baz", "stri", 53))
		return_value = -1;
	if (test_case("Case 3: big empty", "", "stri", 53))
		return_value = -1;
	if (test_case("Case 3: little empty", "source string", "", 53))
		return_value = -1;
	//	 NOTE:  whenever NULL shall segv
	/*test_case("Case 3: NULL as big and valid little", NULL, "Baz", 5);*/
	/*test_case("Case 3: big valid and NULL little", "Foo Bar Baz", NULL, 5);*/
	return (return_value);
}
