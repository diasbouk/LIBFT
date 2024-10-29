/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:21:04 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/25 01:34:51 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	little_len;
	unsigned int	count;
	if (!little)
		return ((char *)big);
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	count = 0;
	while (big[count] && count < len)
	{
		if (big[count] ==  little[0])
		{
			if (ft_strncmp(big + count, little, little_len) == 0)
				return ((char *)(big + count));
		}
		count++;

	}
	return ((void *)0);
}
