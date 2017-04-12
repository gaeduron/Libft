/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:11:02 by gduron            #+#    #+#             */
/*   Updated: 2017/04/12 10:03:21 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int nb);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strstr(const char *big, const char *little);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
size_t	ft_strlcat(char *restrict dst, const char *restrict src,\
		size_t size);

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

int     ft_atoi(const char *str);
void	ft_swap(int *a, int *b);
#endif
