/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:43:02 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/08 13:06:12 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_memcmp(const void *dst, const void *src, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isascii(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *find, size_t len);
char	*ft_strdup(const char *s1);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

void	*ft_memset(void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *str, size_t n);
void    *ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *str, int c, size_t n);

#endif
