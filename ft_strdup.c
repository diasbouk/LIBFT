/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:58:31 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/25 01:05:00 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	_strlen(const char *str)
{
	unsigned int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(const char *str)
{
	char	*buff;
	unsigned int	count;

	if (!str)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	if (!buff)
		return (NULL);
	count = 0;
	while (str[count])
	{
		buff[count] = str[count];
		count++;
	}
	buff[count] = '\0';
	return (buff);
}
