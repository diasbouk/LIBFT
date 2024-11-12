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

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	ft_memcpy(dest, src, size - 1);
	dest[size] = '\0';
	return (srclen);
}
