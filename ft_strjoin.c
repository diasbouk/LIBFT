/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:38:15 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/26 15:52:21 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	char	*buff;
	int		buff_count;

	if (!s1 || !s2)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!buff)
		return (NULL);
	count = 0;
	buff_count = 0;
	while (s1[buff_count])
	{
		buff[buff_count] = s1[buff_count];
		buff_count++;
	}
	while (s2[count])
	{
		buff[buff_count] = s2[count];
		count++;
		buff_count++;
	}
	return (buff);
}
