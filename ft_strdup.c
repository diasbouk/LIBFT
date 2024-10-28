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

char	*ft_strdup(const char *str)
{
	char	*buff;
	unsigned int	count;

	if (!str)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
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
