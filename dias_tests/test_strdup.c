#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	test_case(const char *desc, char *str)
{
	char	*res_t;
	char	*res;

	printf("\n%s\n", desc);
	res_t = strdup(str);
	printf("std\n");
	if (!res_t)
	{
		printf("Failed to allocate\n");
	}
	res = ft_strdup(str);
	printf("ft\n");
	if (!res_t)
	{
		printf("Failed to allocate\n");
	}
	printf("Expected ;'%s'\n", res_t);
	printf("Got ;'%s'\n", res);
	printf("%s\n", ft_memcmp(res, res_t, ft_strlen(res)) == 0 ? PASSED : FAILED);
	if (ft_memcmp(res, res_t, ft_strlen(res)))
		return (-1);
	free(res_t);
	free(res);

	return (0);
}


int main(void)
{
	int	return_value = 0;
	test_case("Case normal string: ", "recreat this");
	test_case("Case empty string: ", "");
	test_case("Case NULL: ", "NULL shall segv");

	return (return_value);
}
