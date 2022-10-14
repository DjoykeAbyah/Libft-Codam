/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:38:00 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/13 11:06:07 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/*int main(void)
{
	char src[] = "hello";
	char dest[20];
	
	printf("%zu\n", ft_strlcpy(dest, src, 5));
	printf("%zu\n", strlcpy(dest, src, 5));
}*/
