/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 11:03:30 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/24 11:10:52 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = s;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
*/