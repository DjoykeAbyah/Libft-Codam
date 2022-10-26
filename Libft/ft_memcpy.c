/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:02:44 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/21 11:20:27 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* copies n bytes from memory area to dst
if dst and src overlap, behavior is undefined
Parameters or Arguments
s1
An array where s2 will be copied to.
s2
The string to be copied.
n
The number of characters to copy.
Returns
The memcpy function returns s1 eg.
original value of dst
The memcpy() function returns a pointer to dest*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrd;
	char	*ptrs;
	size_t	i;

	i = 0;
	ptrd = (char *)dst;
	ptrs = (char *)src;
	if (ptrd == '\0' && ptrs == '\0')
	{
		return (NULL);
	}
	while (i < n)
	{
		*ptrd = *ptrs;
		ptrd++;
		ptrs++;
		i++;
	}
	return (dst);
}

/*last while loop extra ptrd != '\0' but then it doesnt seg fault while it should*/