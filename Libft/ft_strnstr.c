/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:40:10 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/11 16:18:49 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	while ((haystack[i] != '\0') && (i < len))
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (j + i < len))
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*in a while loop be sure to write all the conditions 
even if you already wrote them in another loop*/