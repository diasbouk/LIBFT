/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:04:31 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/23 11:02:17 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memset(void *s, int c, unsigned int n);
unsigned int	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
char	*ft_strcpy(char *dest, const char *src);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
#endif
