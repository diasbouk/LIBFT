/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:51:56 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/27 21:54:57 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

static void	reverse_array(char *arr)
{
	int	i;
	int	j;
	char	temp;

	i = 0;
	j = ft_strlen(arr) - 1;
	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}

}

char	*ft_itoa(int n)
{
	char	*buff;
	int	i;
	unsigned int	nbr;

	if (n < 0)
		nbr = -n;
	else
		nbr = n;

	buff = (char *)malloc(sizeof(char) * 1024);
	if (!buff)
		return (NULL);
	i = 0;
	while (nbr > 0)
	{
		buff[i] = (nbr % 10) + '0';
		i++;
		nbr = nbr / 10;
	}
	reverse_array(buff);
	return (buff);
}

int main(void)
{
	char *buffer = ft_itoa(123);
	printf("%s\n", buffer);
	printf("%s\n", ft_itoa(1222));
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%d\n", INT_MIN);
	return (0);
}
