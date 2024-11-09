#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void    test_case(const char *s1, const char *set)
{
	printf("String :'%s'\nAfter trim : '%s'\n\n", s1, ft_strtrim(s1, set));
}

int main(void)
{
    test_case("      Join    ", " ");
    test_case("aaaaaJoinaaaaa", "asasfd");
    test_case("asasaaTrim this oneasassa", "aso ");
    test_case(NULL, NULL);
    return (0);
}
