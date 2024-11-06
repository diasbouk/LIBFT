/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:39:08 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/26 14:50:22 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *substring;

    if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	if (len == 0)
		return (ft_calloc(1, sizeof(char)));
    substring = ft_calloc(len + 1, sizeof(char));
    if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
    return (substring);
}
