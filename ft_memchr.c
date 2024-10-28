/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:12:44 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 18:16:12 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*str;

	if (!s)
		return ((void *)0);
	str = (const char *)s;
	while (str[count])
	{
		if (str[count] == c)
			return (s + count);
		count++;
	}
	return ((void *)0);
}
