/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 18:40:00 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/11 16:17:22 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
Parameters:
c: The character to output.
fd: The file descriptor on which to write.
Return value: 
None
External functs. write
Description Outputs the character ācā to the given file
descriptor.

no use of printf because this function just writes
*/