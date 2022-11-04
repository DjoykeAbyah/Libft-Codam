/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 18:43:47 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/27 17:13:30 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstring;

	i = 0;
	newstring = ft_strdup(s);
	if (newstring == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	return (newstring);
}

/*
Parameters:
s: The string on which to iterate.
f: The function to apply to each character.

Return value: 
The string created from the successive applications of ’f’.

Returns: 
NULL if the allocation fails.

External functs: 
malloc

Description:
1)Applies the function ’f’ to each character of the string ’s’,
2)passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
*/