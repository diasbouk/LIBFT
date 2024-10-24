/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:11:52 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/24 13:19:47 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_bzero(void *address, unsigned int size)
{
	unsigned int	count;
	char		*buff;

	count = 0;
	buff = (char *)address;
	while (count < size)
	{
		buff[count] = '\0';
		count++;
	}
}

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	void	*buff;

	buff = malloc(nmemb * size);
	ft_bzero(buff, size);
	return (buff);
}
