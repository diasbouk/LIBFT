/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:56:04 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/26 16:13:39 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

static int	is_set(char c, const char *set)
{
	int	count;

	count = 0;
	while (set[count])
	{
		if (set[count] == c)
			return (1);
		count++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		start_index;
	int		end_index;
	int		count;
	char	*trimmed;

	if (!s1)
		return (NULL);
	start_index = 0;
	while (is_set(s1[start_index], set))
		start_index++;
	end_index = _strlen(s1) - 1;
	while (is_set(s1[end_index], set))
		end_index--;
	trimmed = (char *)malloc(sizeof(char) * (end_index - start_index + 1));
	if (!trimmed)
		return (NULL);
	count = 0;
	while (start_index <= end_index)
	{
		trimmed[count] = s1[start_index];
		start_index++;
		count++;
	}
	trimmed[count] = '\0';
	return (trimmed);
}
