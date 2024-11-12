/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:51:27 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 11:26:49 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	ft_strlcpy(dest + destlen, src, size - destlen);
	if (size < destlen)
		return (size + srclen);
	return (destlen + srclen);
}
