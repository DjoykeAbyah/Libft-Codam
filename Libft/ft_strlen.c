/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 11:53:32 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/11 16:54:54 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
i[0] till end includes \0
really needed to put extra condition of \0

description
the length of the string s. 
never scans beyond the first maxlen bytes of s.

return:
number of characters that precede the terminating NUL character
*/