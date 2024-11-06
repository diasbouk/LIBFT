#include "../libft.h"
#include <stdio.h>
#include <limits.h>
#include <errno.h>

int	test_case(const char *desc, char *str)
{
	int res_t;
	int res;

	res_t = atoi(str);
	res = ft_atoi(str);

	printf("\n%s\n", desc);

	printf("Expected : '%d'\n", res_t);
	printf("Got: '%d'\n", res);
	printf("%s\n", res_t == res ? PASSED : FAILED);
	if (res_t != res)
		return (-1);
	return (0);
}

int main(void)
{
	int	return_value = 0;

	if (test_case("Case : 123", "123"))
		return_value = -1;
	if (test_case("Case : 0", "0"))
		return_value = -1;
	if (test_case("Case : 990", "990"))
		return_value = -1;
	if(test_case("Case 1: 0", ft_itoa(INT_MIN)))
		return_value = -1;
	if(test_case("Case 1: 2147483648", "2147483648"))
		return_value = -1;
	if(test_case("Case 1: -2147483649", "-2147483649"))
		return_value = -1;
	if(test_case("Case 1: 1844674407370955161599", "1844674407370955161599"))
		return_value = -1;
	if(test_case("Case 1: -1844674407370955161599", "-1844674407370955161599"))
		return_value = -1;
	if(test_case("Case 1: 18446744073709551618", "18446744073709551618"))
		return_value = -1;
	if(test_case("Case 1: 9223372036854775807", "9223372036854775807"))
		return_value = -1;
	if(test_case("Case 1: -9223372036854775808", "-9223372036854775808"))
		return_value = -1;

	return (return_value);
}
