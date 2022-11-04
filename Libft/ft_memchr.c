/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 13:14:17 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/01 16:09:51 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* The memchr() 
(1)built-in function searches the first count bytes pointed to by buf 
(2)for the first occurrence of c 
(3)converted to an unsigned character. 
(4) The search continues until it finds c or examines count bytes.*/

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/* int niet comparen met adres van string, typecast probleem, size_t geen int, 
uit index juiste adres geven niet gewoon pointer anders krijg je hele stirng
(1) find \0
(2) cast in unsigned memory
DO NOT OVERPROTECT OR PROTECT AT ALL BECAUSE ORIGINAL DOESNT EITHER*/