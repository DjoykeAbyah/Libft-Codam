/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 10:34:39 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/19 16:10:58 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*d;

	d = (char *)s;
	while (*d != '\0')
	{
		if (*d == (char) c)
		{
			return (d);
		}
		d++;
	}
	if ((char) c == '\0')
	{
		return (d);
	}	
	return (NULL);
}
