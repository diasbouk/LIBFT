#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void    test_case(char *str, unsigned int len)
{
    printf("%s\n", ft_substr(str, 4, len));
    printf("%s\n", ft_substr(str, 0, len));
}

int main(void)
{
    test_case("Str to find", 11);
    test_case("Str to find", 11);
    return (0);
}
