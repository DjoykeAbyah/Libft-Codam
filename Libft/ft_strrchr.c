/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 16:32:12 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/11 16:12:59 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	int		len;

	d = (char *)s;
	len = ft_strlen(d);
	while (len >= 0)
	{
		if (d[len] == (char)c)
		{
			return (&d[len]);
		}
		len--;
	}
	return (NULL);
}
