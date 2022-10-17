/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:41:18 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/17 19:48:52 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (src[j] != '\0' && j + j< size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

/*appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters.  
It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as
it means that either dstsize is incorrect or that dst is not a proper string), 
RETURN VALUES means the initial length of dst plus the length of src.  
If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.  */