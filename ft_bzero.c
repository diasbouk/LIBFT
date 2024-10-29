/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:59:14 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/22 18:09:12 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	size;
	char		*buf;

	if (!s)
		return ;
	buf = (char *)s;
	size = 0;
	while (size < n)
	{
		buf[size] = '\0';
		size++;
	}
}
