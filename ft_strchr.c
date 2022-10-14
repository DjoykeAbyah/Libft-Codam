/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 10:34:39 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/13 11:39:44 by dreijans      ########   odam.nl         */
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


/*char	*ft_strchr(const char *str, int c)
{
	while (str != '\0')
	{
		if (*str == (char) c)
		{
			return ((char *) str);
		}
		str++;
	}
	return (NULL);
} weird ass code almost works but in a weird way*/
