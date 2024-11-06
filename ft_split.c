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
	int		i;
	int		size;
	char	**block;

	i = 0;
	size = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			size++;
		while (s[i] && s[i] != c)
			i++;
	}
	block = ft_calloc(size + 1, sizeof(char *));
	return (block);
}

static char	*_strdup_from(const char *str, char c)
{
	int		size;
	char	*buffer;

	if (!str)
		return (NULL);
	size = 0;
	while (str[size] && str[size] != c)
		size++;
	buffer = ft_calloc(size + 1, sizeof(char *));
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, str, size + 1);
	return (buffer);
}

static char	**free_all(char **list)
{
	int	index;

	index = 0;
	while (list[index])
	{
		free(list[index]);
		list[index] = NULL;
	}
	free(list);
	list = NULL;
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**list;
	char	*temp;
	int		count;

	i = 0;
	count = 0;
	list = allocate_list(s, c);
	if (!list)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		temp = _strdup_from(s + i, c);
		if (!temp)
			return (free_all(list));
		list[count] = temp;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	list[count] = NULL;
	return (list);
}
