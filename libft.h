/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelhaye <fdelhaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:40:45 by fdelhaye          #+#    #+#             */
/*   Updated: 2014/12/03 00:50:56 by fdelhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

int		ft_atoi(char *str);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strdup(char *s1);
char	*ft_strchr(char *str, int c);
void	ft_bzero(void *str, size_t n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
size_t	ft_intlen(int n);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **map);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar(const char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(const char *str);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(const char *str);
void	ft_putstr_fd(char const *str, int fd);
char	*ft_strcat(char *dest, const char *src);
void	ft_strclr(char *s);
int		ft_strcmp(char const *s1, char const *s2);
void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, char const *src, size_t len);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
char	*ft_strncpy(char *dest, char *src, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strtrim(char const *s);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
