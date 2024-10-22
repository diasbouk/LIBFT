/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:13:19 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/22 18:24:20 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	size;
	char		*srtr;
	char		*dstr;

	if (!src)
		return (dest);
	size = 0;
	srtr = (char *)src;
	dstr = (char *)dest;
	while (size < n)
	{
		dstr[size] = srtr[size];
		size++;
	}
	dstr[size] = 0;
	return (dstr);
}
