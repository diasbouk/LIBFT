/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:21:52 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 10:31:59 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char	*strdest;
	char	*strsrc;
	int	size;

	if (!src)
		return (dest);
	size = n - 1;
	strdest = (char *)dest;
	strsrc = (char *)src;
	while (size >= 0)
	{
		strdest[size] = strsrc[size];
		size--;
	}
	return (dest);
}
