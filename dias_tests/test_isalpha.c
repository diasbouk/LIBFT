#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

void    test_case(char test)
{
    int c = isalpha(test);
    int d = ft_isalpha(test);

    printf("Expected ---> %d\nGot ---> %d\n---------------------------\n", c, d);
}

int	main(void)
{
    test_case('a');
    test_case('A');
    test_case('=');
    test_case('#');
    test_case(123);
    test_case(-123);
    test_case(-244);
    test_case(3003);
    test_case(0);
    test_case('Z');
    test_case('c');
    return (0);
}
