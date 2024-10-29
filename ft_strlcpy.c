/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:37:26 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 10:49:35 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	srclen;
	unsigned int	count;

	if (!src)
		return (0);
	srclen = ft_strlen(src);
	count = 0;
	while (count < size)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (srclen);
}
