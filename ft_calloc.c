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

//	 FIX: handle MAX_SIZE allocation overflow

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buff;

	if ((nmemb * size) / size != nmemb)
		return (NULL);
	buff = malloc(nmemb * size);
	if (!buff)
		return (NULL);
	ft_bzero(buff, size + 1);
	return (buff);
}
