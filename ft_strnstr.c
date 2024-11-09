/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:21:04 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/06 16:59:36 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	count;

	if (!little)
		return ((char *)big);
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	count = 0;
	while (big[count] && count < len)
	{
		if (big[count] == little[0])
		{
			if (strncmp(big + count, little, little_len) == 0 && (count + little_len - 1) < len)
				return ((char *)(big + count));
		}
		count++;
	}
	return (NULL);
}
