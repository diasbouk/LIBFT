/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboukiou <sboukiou@1337.ma>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:04:31 by sboukiou          #+#    #+#             */
/*   Updated: 2024/10/27 21:30:37 by sboukiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
unsigned int	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char s2, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, unsigned int len);
int	ft_atoi(const char *nptr);
void	*ft_calloc(unsigned int nmemb, unsigned int size);
char	*ft_strdup(const char *str);
char    *ft_substr(const char *s, unsigned int start, unsigned int len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *s, char c);
#endif
