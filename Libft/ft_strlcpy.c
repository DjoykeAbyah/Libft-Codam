/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:38:00 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/11 16:04:13 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
size_t kan niet negatief zijn dus (i +1) ipv (destsize -1)


int main(void)
{
	char src[] = "hello";
	char dest[20];
	
	printf("%zu\n", ft_strlcpy(dest, src, 5));
	printf("%zu\n", strlcpy(dest, src, 5));
}*/
