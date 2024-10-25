/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:21:04 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/25 01:34:51 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static int _strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] && s2[count]) && count < n)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	little_len;
	unsigned int	count;
	if (!little)
		return ((char *)big);
	little_len = _strlen(little);
	if (!little_len)
		return ((char *)big);
	count = 0;
	while (big[count] && count < len)
	{
		if (big[count] ==  little[0])
		{
			if (_strncmp(big + count, little, little_len) == 0)
				return ((char *)(big + count));
		}
		count++;

	}
	return ((void *)0);
}
