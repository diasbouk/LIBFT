/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:24:19 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 18:38:29 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static int	is_delim(char c)
{
	if (c == ' ' || c == '\r' || c == '\f')
		return (1);
	if (c == '\t' || c == '\v' || c == '\0')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	num;
	int		count;
	int		sign;

	count = 0;
	while (is_delim(nptr[count]) && nptr[count])
		count++;
	sign = 1;
	if (nptr[count] == '-')
	{
		sign = -1;
		count++;
	}
	num = 0;
	while (ft_isdigit(nptr[count]) && nptr[count])
	{
		num *= 10;
		num += nptr[count] - '0';
		count++;
	}
	return (num * sign);
}
