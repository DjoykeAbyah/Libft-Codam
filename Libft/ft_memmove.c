/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:55:26 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/21 13:26:51 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* copies len bytes from string src to string dst.  
The two strings may overlap; 
the copy is always done in a non-destructive manner.
RETURN 
returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		i = (int)len -1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{	
		i = 0;
		while (i < (int)len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/* waarom i is len -1? je zet int over in index 
int 10 wordt index 9 i0, i1, i2 
met overlap wil je kopieren vanaf het einde anderetc
bij memcpy geeft overlap undefinedbehavior, memmove overwrtite*/
