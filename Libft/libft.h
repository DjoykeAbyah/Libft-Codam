/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 19:14:52 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/14 13:28:14 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
/**
 * include the libraries you want to include like unistd.h etc
 * make quotes above funtions
 */
int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isascii(int c);

int	ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	ft_toupper(int c);

int	ft_tolower(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *s, int c);

int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_atoi(const char *str);

#endif
