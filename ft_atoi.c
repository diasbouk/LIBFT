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

/**
	* is_delim - Checks if a char is a delimiter or not
	* @c: Char to check
	* Return: 1 if it is a delimiter , 0 otherwise
*/

static int	is_delim(char c)
{
	if (c == ' ' || c == '\r' || c == '\f')
		return (1);
	if (c == '\t' || c == '\v' || c == '\0')
		return (1);
	return (0);
}

/**
	* ft_atoi - Converts a valid alphanumerical string into an integer literal
	* @nptr: Alphanum string to convert
	* Return: An int depending on the nptr
*/

	/* FIX: Handle MAX_SIZE input*/
	/* FIX: remove using errno*/
	/* NOTE: Maybe handle setting the errno value*/
	/*PERF: Optimise this + reduce loops and time compxs*/

#include <errno.h>
int	ft_atoi(const char *nptr)
{
	int				count;
	int				sign;
	unsigned int	num;

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
		if (errno == ERANGE)
		{
			if (sign == -1)
				return (0);
			if (sign == 1)
				return (-1);
		}
			
	}
	return (num * sign);
}
