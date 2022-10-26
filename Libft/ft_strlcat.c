/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:41:18 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/19 19:32:03 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* strlcat() concatenates two strings.
strlcat() guarantees that the total length of
the result string will be between the initial length of 'dst' and 'size'.
The zero at the end of the string is included. This function is mainly
used to avoid oversize of the character array.
RETURN VALUE
returns the total length of the string strlcat() tried to create.

appends string src to the end of dst.  
It will append at most dstsize - strlen(dst) - 1 characters.  
It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as
it means that either dstsize is incorrect or that dst is not a proper string), 
RETURN VALUES means the initial length of dst plus the length of src.  
If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this. 
size - dstlen  -1 !!!!!!!!!! */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	ft_strlcpy(dst + dstlen, src, dstsize - dstlen);
	return (dstlen + srclen);
}

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	dstlen;
// 	size_t	srclen;
// 	char	*ptr;
// 	size_t	i;

// 	ptr = (char *)src;
// 	dstlen = ft_strlen(dst);
// 	srclen = ft_strlen(src);
// 	if (dstsize < dstlen)
// 		return (dstsize + srclen);
// 	while (*dst != '\0' && dstlen < dstsize)
// 		dst++;
// 	i = 0;
// 	while ((*ptr != '\0') && i < (dstsize - dstlen -1))
// 	{
// 		*dst = *ptr;
// 		dst++;
// 		ptr++;
// 		i++;
// 	}
// 	*dst = '\0';
// 	return (dstlen + srclen);
// }

/*KO reason stilll need to figure out probably over protecting
maybe change to index
dest[10] = 'a';
    ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));
    write(1, "\n", 1);
    write(1, dest, 15);
Expected (cat -e test08.output):
32$
rrrrrr^@^@^@^@a^@^@^@^@
Your result (cat -e user_output_test08):
32$
lorem ipsum dol*/