#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void    test_case(const char *s1, const char *set)
{
	printf("%s\n", ft_strtrim(s1, set));
}

int main(void)
{
    test_case("      Join    ", " ");
    test_case("aaaaaJoinaaaaa", "asasfd");
    test_case("asasaaTrim this oneasassa", "ao ");
    return (0);
}
