/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:16:43 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/27 21:40:54 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**allocate_list(const char *s, char c)
{
	int	i;
	int	size;
	char	**block;

	i = 0;
	size = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			size++;
		while (s[i] && s[i] != c)
			i++;
	}
	block = (char **)malloc(sizeof(char *) * (size + 1));
	if (!block)
		return (NULL);
	return (block);
}

static char	*_strdup_from(const char *str, char c)
{
	int	i;
	int	size;
	char	*buffer;

	i = 0;
	size = 0;
	while (str[i] && str[i] != c)
	{
		size++;
		i++;
	}
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

char	**ft_split(const char *s, char c)
{
	int	i;
	char	**list;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	list = allocate_list(s, c);
	if (!list)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		list[count++] = _strdup_from(s + i, c);
		while (s[i] && s[i] != c)
			i++;
	}
	list[count] = NULL;
	return (list);
}
