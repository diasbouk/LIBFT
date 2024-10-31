#include "../libft.h"
#include <stdio.h>


char	upper(unsigned int index, char c)
{
	return (ft_toupper(c));
}


int main(void)
{
	const char *str = " turn this Into Upper case ALL";
	char *new = ft_strmapi(str, upper);
	printf("%s\n", new);
	free(new);
	return (0);
}
