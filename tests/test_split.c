#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{
	char *str = "S           l          l l plitthisstringw                     ith            spaces    ";
	char **list = ft_split(str, ' ');
	int i = 0;
	while (list[i])
		printf(" ---> %s\n", list[i++]);
	return (0);
}
