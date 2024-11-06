/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:49:54 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/29 02:24:50 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_sign(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		return (-n);
	}
	return (n);
}

static char	*allocate_buffer(int n)
{
	int		index;
	char	*buffer;

	index = 0;
	while (n > 0)
	{
		n /= 10;
		index++;
	}
	buffer = (char *)malloc(sizeof(char) * (index + 1));
	ft_bzero(buffer, index);
	return (buffer);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;
	char			*buffer;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	number = ft_handle_sign(n, fd);
	buffer = allocate_buffer(number);
	if (!buffer)
		return ;
	n = 0;
	while (number > 0)
	{
		buffer[n++] = (number % 10) + '0';
		number /= 10;
	}
	while (n > 0)
	{
		ft_putchar_fd(buffer[n - 1], fd);
		n--;
	}
	free(buffer);
}
