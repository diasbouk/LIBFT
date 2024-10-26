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

int	is_set(char c, const char *set)
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
	char	*trimmed;
	int		count_start;
	int		count_end;
	int		trimmed_size;

	if (!s1)
		return (NULL);
	count_start = 0;
	while (is_set(s1[count_start], set))
		count_start++;
	trimmed_size = 0;
	while (!is_set(s1[count_start], set))
	{
		trimmed_size++;
		count_start++;
	}
	count_start -= trimmed_size;
	trimmed = (char *)malloc(sizeof(char) * (trimmed_size + 1));
	if (!trimmed)
		return (NULL);
	trimmed_size = 0;
	while (s1[count_start])
	{
		trimmed[trimmed_size] = s1[count_start];
		trimmed_size++;
		count_start++;
	}
	return(trimmed);
}
