#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	/*printf("%d\n", INT_MIN);*/
	printf("-2147483648 -- > %d\n",ft_atoi("-2147483648"));
	printf("-90 ---> %d\n",ft_atoi("-90"));
	printf("-1231 ---> %d\n",ft_atoi("-1231"));
	printf("-99999 ---> %d\n",ft_atoi("-99999"));
	printf("-23423 ---> %d\n",ft_atoi("-23423"));
	printf("0 ---> %d\n",ft_atoi("0"));
	printf("-89 ---> %d\n",ft_atoi("-89"));
	return (0);
}
