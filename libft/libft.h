/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brybenja <brybenja@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:07:43 by brybenja          #+#    #+#             */
/*   Updated: 2024/07/10 11:08:00 by brybenja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
/*Function prototypes*/
int				ft_atoi(const char *str);
int				ft_isalpha(char c);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_memcmp(void *str1, void *str2, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
void			*ft_memchr(const void *str, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t size);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t n);
void			ft_striteri(char *s, void (*apply_func)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *str);
const char		*ft_strnstr(const char *str, const char *to_find, size_t n);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_substr(char const *s, size_t start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *str, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			ft_strlcat(char *dst, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dt, const char *src, unsigned int size);
#endif /* LIBFT_H */
