#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

int	test_case(const char *desc, size_t nmemb, size_t size)
{
	printf("\n%s\n", desc);

	char	*res;
	char	*res_t;

	res_t = calloc(nmemb, size);
	if (!res_t)
	{
		printf("Allocation failed on calloc\n");
	}
	res = ft_calloc(nmemb, size);
	if (!res)
	{
		printf("Allocation failed on ft_calloc\n");
	}

	if (!res || !res_t)
		return (-1);
	printf("Expected : '%p' --> '%s'\n",res_t, res_t);
	printf("Got : '%p' --> '%s'\n",res, res);
	printf("%s\n", ft_memcmp(res_t, res, nmemb * size) == 0 ? PASSED : FAILED);
	if (ft_memcmp(res_t, res, nmemb * size))
	{
		free(res_t);
		free(res);
		return (-1);
	}
	free(res_t);
	free(res);
	return (0);
}

int main(void)
{
	int	return_value = 0;

	test_case("Case normal allcation:", 12, sizeof(char));
	test_case("Case large size allocation:", INT_MAX, sizeof(char));
	test_case("Case large size allocation:", SIZE_MAX, SIZE_MAX);

	return (return_value);
}
