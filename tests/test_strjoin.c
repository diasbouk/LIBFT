#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

// We need more tests

void    test_case(const char *s1, const char *s2)
{
    printf("%s\n", ft_strjoin(s1, s2));
    printf("%s\n", ft_strjoin(s1, s1 + 2));
    printf("%s\n", ft_strjoin(s2, s2 + 2));
    printf("%s\n", ft_strjoin(s2, s2));

}

int main(void)
{
    test_case("Join ", "those strings");
    return (0);
}
