/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:05:11 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/22 16:29:12 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	char str[4] = {0};
	int *add = malloc(sizeof(int));
	if (!add)
		return (0);
	unsigned int var = -2;
	printf("%d --> %u\n", INT_MIN, INT_MIN);
	ft_memset(add, 12, 4);
	printf("%u\n", *add);
	printf("%d\n", *add);
	printf("%s\n", str);
	free(add);
	return (0);
}
