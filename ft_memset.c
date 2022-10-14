/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:37:14 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/10 18:02:32 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*charb;
	size_t	i;

	i = 0;
	charb = b;
	while (i < len)
	{
		*charb = (unsigned char)c;
		charb++;
		i++;
	}
	return (b);
}
