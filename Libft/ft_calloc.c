/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 14:28:14 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/24 11:54:43 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alocmem;

	alocmem = malloc(count * size);
	if (alocmem == NULL)
	{
		return (NULL);
	}
	ft_bzero(alocmem, (count * size));
	return (alocmem);
}

/*function contiguously allocates enough space for count objects
The allocated memory is filled with bytes of value zero. bzero/ memset*/
// var = malloc(sizeof(whatever) * amountofwhatever);
// size_t Unlike standard longs unsigned longs won't store negative numbers, 
// making their range from 0 to 4,294,967,295
// int 2147483647 -2147483648
// free in main
