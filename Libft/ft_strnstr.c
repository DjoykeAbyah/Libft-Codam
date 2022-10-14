/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:40:10 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/14 17:20:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (needle[i] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0' && haystack[i] <= len)
	{
		j = 0;
		if (haystack[i+j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
		}
		j++;
		i++;
	}
	return (NULL)
	
}
//logica ervan uitschrijven, als neelde \0 is haystack returnen??