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

char    *ft_substr(const char *s, unsigned int start, unsigned int len)
{
    char    *substring;
    unsigned int  count;

    if (!s)
        return (NULL);
    substring = (char *)malloc(sizeof(char) * (len + 1));
    if (!substring)
        return (NULL);
    count = 0;
    while (start < len)
    {
        substring[count] = s[start];
        count++;
        start++;
    }
    return (substring);
}
