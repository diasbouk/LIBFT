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

static char	*ft_create_string(const char *str, char c)
{
	size_t	size;
	char	*buffer;

	if (!str)
		return (NULL);

	size = 0;
	while (str[size] && str[size] != c)
		size++;
	buffer = ft_calloc(size + 1, sizeof(char));
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
		index++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	int		index;
	int		size;
	char	**list;
	char	*temp;

	if (!str)
		return (NULL);
	list = NULL;
	index = 0;
	size = 0;
	while (str[index])
	{
		while (str[index] && str[index] == c)
			index++;
		size++;
		while (str[index] && str[index] != c)
			index++;
	}
	list = ft_calloc(size + 1, sizeof(char *));
	if (!list)
		return (NULL);
	size = 0;
	index = 0;
	while (str[index])
	{
		while (str[index] && str[index] == c)
			index++;
		if (!str[index])
			return (list);
		temp = ft_create_string(str + index, c);
		if (!temp)
			return (free_all(list));
		list[size++]  = temp;
		while (str[index] && str[index] != c)
			index++;
	}
	list[index] = NULL;
	return (list);
}
