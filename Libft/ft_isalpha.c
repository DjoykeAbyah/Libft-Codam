/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:22:51 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/13 11:05:42 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
/*#include <ctype.h>*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	printf("%i\n", ft_isalpha('f'));
	printf("%i\n", isalpha('f'));
}*/
