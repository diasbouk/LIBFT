/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:03:28 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 18:06:15 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*address;
	int	count;

	count = 0;
	address = (void *)0;
	while (s[count])
	{
		if (s[count] == c)
			address = s + count;
		count++;
	}
	return (address);
}
