#include "../libft.h"
#include <stdio.h>

int	test_case(const char *desc, char *str, char c)
{
	char **list = ft_split(str, c);
	int index = 0;

	printf("\n%s\n", desc);

	if (!list)
	{
		printf("something failed");
		return (0);
	}

	while (list[index])
	{
		printf("Element %d: '%s'\n", index, list[index]);
		index++;
	}

	return (0);
}

int main(void)
{
	test_case("lorem ispum classic", "as popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.", ' ');

	test_case("Case 2 ", "                          ", ' ');
	test_case("Case 3", "TESt with null sep", '\0');
	return (0);
}
