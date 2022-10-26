/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 14:19:08 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/25 15:57:11 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*newstr;
	size_t		len;

	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	newstr = (char *)malloc(sizeof (char) * len);
	if (newstr != '\0')
	{
		ft_strlcpy(newstr, s1, (ft_strlen(s1) + 1));
		ft_strlcat(newstr, s2, len);
		return (newstr);
	}
	return (NULL);
}

/*
Prototype:
char *ft_strjoin(char const *s1, char const *s2);

Parameters:
1) s1: The prefix string.
2) s2: The suffix string.

Return value: 
The new string.
NULL if the allocation fails.

External functs: 
malloc

Description: 
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/