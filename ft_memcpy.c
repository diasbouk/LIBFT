/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:13:19 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/22 18:24:20 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			size;
	unsigned char	*temp;

	if (!dest && !src)
		return (NULL);
	size = 0;
	temp = (unsigned char *)src;
	while (size < n)
	{
		ft_memset(dest, temp[size], 1);
		size++;
	}
	return (dest);
}
