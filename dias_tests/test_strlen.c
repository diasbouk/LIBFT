#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int    test_case(char *test)
{
    unsigned int len_ex = strlen(test);
    unsigned int len_got = ft_strlen(test);

    printf("String: %s\nExpected ---> %u\nGot ---> %u\n---------------------------\n", test, len_ex, len_got);
	printf("%s\n", len_ex == len_got ? PASSED : FAILED);
	if (len_ex != len_got)
		return (-1);
	return (0);
}

struct name {
    int age;
    char name[20];
};

int	main(void)
{
    char *test_1 = "Test for sttr";
    int num = 1337;
    char test_2[90] = {'\0'};
    char test_3 = 'Z';
	int return_value = 0;
    unsigned int pos = 133337;
    struct name dias = {20, "dias"};

	if (test_case(test_1))
		return_value = -1;
	if (test_case(test_2))
		return_value = -1;
	if (test_case(&test_3))
		return_value = -1;
	if (test_case((char *)(&num)))
		return_value = -1;
	if (test_case((char *)(&pos)))
		return_value = -1;
	if (test_case((char *)(&dias)))
		return_value = -1;
    return (return_value);
}
