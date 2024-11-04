/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:12:44 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 18:16:12 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;
	unsigned int	count;

	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	count = 0;
	while (str[count] && count < n)
	{
		if (str[count] == c)
			return (str + count);
		count++;
	}
	if (c == 0)
		return (str + count);
	return (NULL);
}
