/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:39:08 by sboukiou          #+#    #+#             */
/*   Updated: 2024/11/06 17:01:10 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*substring;
	size_t		src_len;

	if (!s)
		return (ft_calloc(1, sizeof(char)));
	src_len = ft_strlen(s);
	if (start >= src_len)
		return (ft_calloc(1, sizeof(char)));
	if (len == 0 || src_len == 0)
		return (ft_calloc(1, sizeof(char)));
	if (len > src_len)
		len = src_len;
	substring = ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}
