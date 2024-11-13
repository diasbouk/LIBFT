/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:06:32 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 18:07:00 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
	* ft_strchr - Finds the first occurrence of a char
	* int a given string and returns its address
	* @s: String to search in
	* @c: Character to find
	* Return: Address of the char's first occurrence
	* or NULL if not found
*/

char	*ft_strchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	return (ft_memchr(s, c, len - 1));
}
