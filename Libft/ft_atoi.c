/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 09:41:41 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/21 16:00:44 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_iswhitespace(char c)
{
	return (c == ' ' || ((c >= 9 && c <= 13)));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	i = 0;
	while (ft_iswhitespace(str[i]) && str[i] != '\0')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		number = number * 10 + str[i] -48;
		i++;
	}
	return (number * sign);
}

	/*does not recognize or +/- decimal points, ignores whitespace
	skip white space characters
	detect minus
	by doing the conversion you sustract 48 from yout char value of a number getting the actual int 
	CHECK WHITE SPACE check !!!!!!!man isspace!!!!
	let op dat je niet int met char vergelijkt en denkt dat het werkt! i != '\0' is niet hetzelfde als str[i] != '\0'*/
	