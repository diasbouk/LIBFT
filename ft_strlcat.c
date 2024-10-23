/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:51:27 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 11:26:49 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	count;

	if (!src || !dest)
		return(0);
	count = 0;
	destlen = ft_strlen(dest);
	while (destlen < size - 1 && src[count])
	{
		dest[destlen + count] = src[count];
		count++;
	}
	return (destlen + count);
}
