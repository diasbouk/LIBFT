#include "libft.h"
#include <stdio.h>


int main(void)
{
	char str[] = "Erase this one here";
	printf("Before --> %s\n", str);
	printf("len before --> %d\n", ft_strlen(str));
	ft_bzero(str, ft_strlen(str));
	printf("len after --> %d\n", ft_strlen(str));
	printf("After --> %s\n", str);
}
