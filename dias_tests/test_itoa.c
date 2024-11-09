#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int	test_case(int n)
{
	printf("\n%s\n", "TST");

	printf("Expected : %d\n", n);
	char *str = ft_itoa(n);
	printf("Got : %s\n", str);
	free(str);
	return (0);
}


int main(void)
{
	int	return_value = 0;

	test_case(INT_MIN);
	test_case(0);
	test_case(-99);
	test_case(INT_MAX);
	test_case(12000);
	return (return_value);
}
