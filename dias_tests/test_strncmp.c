#include "../libft.h"
#include <stdio.h>
#include <string.h>


void	test_case(const char *desc, char *s1, char *s2, size_t n)
{
	printf("\n%s\n", desc);
	int	res_t = strncmp(s1, s2, n);
	printf("Std worked\n");
	int	res = ft_strncmp(s1, s2, n);
	printf("Ft worked\n");
	printf("Expected : '%d'\n", res_t);
	printf("Got : '%d'\n", res);
	printf("%s\n", res_t == res ? PASSED : FAILED);
}

int main(void)
{
	test_case("Case 1 : Equal strings ", "source", "source", 6);
	test_case("Case 2: different strings strings ", "source 1", "source 2", 7);
	test_case("Case 3: different strings strings ", "source 1", "source 2", 8);
	test_case("Case 4: different strings strings ", "source 1", "source 2", 7);
	test_case("Case 5: different strings sizes ", "sour", "source 2", 7);
	test_case("Case 5: Large size > lengths ", "source 2", "source 2", 97);
	test_case("Case 5: Null size + equal strings", "source 2", "source 2", 0);
	test_case("Case 5: Null size + different strings ", "source 2", "source 2", 0);
	test_case("Case 5: null char in middle equal before , different after ", "source\0 2", "source\0 3", 10);
	test_case("Case 6: Very large size + large strings ", "fsdfd", ";lkjdfs", 1000);
	test_case("Case 6: Empty strings", "", "", 30);
	test_case("Case 6: long Empty strings", "\0\0\0", "\0\0\0", 30);
	printf("\nEvery NULL passed as s1 or s2 should cause a segv !!\n");
	/*test_case("Case 5: Null strings both", NULL, NULL, 10);*/
	/*test_case("Case 5: s1 NULL , s2 valid", NULL, "Test",10);*/
	/*test_case("Case 5: s1 valid , s2 NULL ", "Test", NULL, 10);*/
	return (0);
}
