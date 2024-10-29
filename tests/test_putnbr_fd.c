#include "../libft.h"
#include <limits.h>


int main(void)
{
	ft_putnbr_fd(INT_MIN, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(1223, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-9098, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
