/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:21:52 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 10:31:59 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*strsrc;
	int				size;

	strsrc = (unsigned char *)src;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	size = n - 1;
	while (size >= 0)
	{
		ft_memset(dest, strsrc[size], 1);
		size--;
	}
	return (dest);
}
