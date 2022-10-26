/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 19:22:38 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/26 11:07:51 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}

/*
Parameters:
s: The string to output.
fd: The file descriptor on which to write.

Return value:
None

External functs: 
write

Description:
Outputs the string ’s’ to the given file descriptor.
*/