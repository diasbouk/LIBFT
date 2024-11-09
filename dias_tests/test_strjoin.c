#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

// We need more tests

void    test_case(const char *desc, const char *s1, const char *s2)
{
	printf("\n%s\n", desc);
	char *buff = ft_strjoin(s1, s2);
    printf("'%s' + '%s' --> %s\n", s1, s2, buff);
	printf("%s\n", PASSED);
	if (buff)
		free(buff);


}

int main(void)
{
    test_case("regular joining", "Join ", "those strings");
    test_case("regular joining", "one ", "two three");
    test_case("regular joining", "LOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOONG UPPER", "looooooooooooooooooooooooong lower");
    test_case("NULl joining", NULL, "those strings");
    test_case("NULl joining", NULL, NULL);
    test_case("NULl joining", "No null", NULL);
    return (0);
}
