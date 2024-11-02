#include "../libft.h"
#include <stdio.h>
#include <string.h>


void	test_case(const char *desc, char *str, int c)
{
	printf("\n%s\n", desc);
	printf("Std  ran-->\n");
	char *res_t  = strchr(str, c);
	printf("Ft   ran-->\n");
	char *res =  ft_strchr(str, c);

	printf("Expected : '%p'\n", res_t);
	printf("Got : '%p'\n", res);
	printf("TEST %s\n", res == res_t ? "PASSED": "FAILED");
}

int main(void)
{
	test_case("Regualr Existing char in a string", "Find f", 'f');
	test_case("Regualr non Existing char in a string", "Find f", 'y');
	test_case("Valid string + non printable char", "Find f", 8);
	test_case("Valid string + non printable char '\\0'", "F\0ind f", '\0');
	test_case("Valid string + non printable char", "F\vind f", 11);
	test_case("Valid string + char at the end of ascii tbl", "F~ind f", 126);
	test_case("Valid string + char at the end of ascii tbl", "F~ind f", 127);
		//  NOTE: NULL should segfault
	/* test_case("NULL string and valid char", NULL, 'y');*/
	return (0);
}
