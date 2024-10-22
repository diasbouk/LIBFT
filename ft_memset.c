/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:21:21 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/22 16:35:54 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	size;
	char		*buff;

	if (!s)
		return (s);
	buff = (char *)s;
	size = 0;
	while (size < n)
	{
		buff[size] = c;
		size++;
	}
	return (buff);
}
