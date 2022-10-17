/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:32:12 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/17 15:20:57 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

char *ft_strrchr(const char *s, int c)
{
	char* d;
	int len;

	d = (char *)s;
	len = ft_strlen(d);
	while (len >= 0)
	{
		if (*d == c)
		{
			return (d);
		}
		len--;
		d++;
	}
	return (NULL);
}
