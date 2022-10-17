/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 19:13:45 by dreijans      #+#    #+#                 */
/*   Updated: 2022/10/17 19:35:20 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/*put block brackets when testing you variables
you don't have to include your libraries in the .c funtcions but put them in your main for testing
VERGEET NIET DEZE FILE TE VERWIJDEREN VOORDAT JE PUSHT*/

//test bzero to see if it actually does anything
void	helpmesee(char *help, int n)
{
	int	i;

	i = 0;
	{
		while (i < n)
		{
			if (help[i] == '\0')
			{
				write(1, "0", 1);
			}
			else
			{
				write(1, &help[i], 1);
			}
			i++;
		}
	}
}

int	main(void)
{
	printf("%s\n", ("Test is al num"));
	printf("%i\n", ft_isalnum(';'));
	printf("%i\n", isalnum(';'));
	
	printf("\n%s\n", ("Test is al alpha"));
	printf("%i\n", ft_isalpha('f'));
	printf("%i\n", isalpha('f'));
	
	printf("\n%s\n", ("Test is digit"));
	printf("%i\n", ft_isdigit('9'));
	printf("%i\n", isdigit('2'));
	
	printf("\n%s\n", ("Test is ascii nonzero if true, 0 if false"));
	printf("%i\n", ft_isascii('h'));
	printf("%i\n", isascii('h'));
	
	printf("\n%s\n", ("Test is printbale with space nonzero if true, 0 if false"));
	printf("%i\n", ft_isprint(' '));
	printf("%i\n", isprint(' '));
	
	printf("\n%s\n", ("Test strlen"));
	printf("%zu\n", ft_strlen("werkt dit wel?"));
	printf("%zu\n", strlen("werkt dit wel?"));
	
	printf("%s\n", ("\n\nTest memset"));
	char str[50] = "blablabla";
	printf("%s\n", ft_memset(str, 'a', 6));
	char str2[50] = "blablabla";
	printf("%s\n", memset(str2, 'z', 6));
	
	printf("\n%s\n", ("Test bzero"));
	char str3[50] = "blablabla";
	ft_bzero(str3, 4);
	char str4[50] = "blablabla";
	bzero(str4, 4);
	helpmesee(str3, 9);
	printf("\n");
	helpmesee(str4, 9);
	printf("\n");
	
	printf("\n%s\n", ("Test strlcpy"));
	char src[] = "hello";
	char dest[20];

	char src1[] = "hello";
	char dest1[20];
	
	printf("%zu\n", ft_strlcpy(dest, src, 3));
	printf("%zu\n", strlcpy(dest1, src1, 3));
	printf("test: %s\n", dest);
	printf("test: %s\n", dest1);

	printf("\n%s\n", ("Test toupper"));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", toupper('z'));
	printf("%c\n", ft_toupper('@'));
	printf("%c\n", toupper('@'));

	printf("\n%s\n", ("Test tolower"));
	printf("%c\n", ft_tolower('B'));
	printf("%c\n", tolower('B'));
	printf("%c\n", ft_toupper('@'));
	printf("%c\n", toupper('@'));

	printf("\n%s\n", ("Test strchr"));
	char banana[] = "i see \0ou!";
	char apple[] = "ooo\0ooo\0oo";
	printf("%s\n", ft_strchr(banana, '\0'));
	printf("%s\n", strchr(banana, '\0'));
	printf("%s\n", ft_strchr(apple, 'y'));
	printf("%s\n", strchr(apple, 'y'));

	printf("\n%s\n", ("Test strrchr"));
	char soup[] = "good soup";
	printf("%s\n", ft_strrchr(soup, 'y'));
	printf("%s\n", strrchr(soup, 'y'));

	printf("\n%s\n", ("Test strncmp"));
	char cake[] = "bloblabla";
	char pie[]	= "bliblublu";
	printf("%i\n", ft_strncmp(cake, pie, 3));
	printf("%i\n", strncmp(cake, pie, 3));

	printf("\n%s\n", ("Test atoi"));
	char s[] = "";
	printf("%i\n", ft_atoi(s));
	printf("%i\n", atoi(s));

	printf("\n%s\n", ("Test strnstr"));
	char haystack[] = "catfishswim";
	char needle[] = "fishs";
	printf("%s\n", ft_strnstr(haystack, needle, 8));
	printf("%s\n", strnstr(haystack, needle, 8));

	printf("\n%s\n", ("Test strlcat"));
	char dst[50] = "012345";
	char src2[] = "abcde";
	printf("%zu\n", ft_strlcat(dst, src2, 5));
	printf("%s\n", dst);
	char dst1[50] = "012345";
	char src3[] = "abcde";
	printf("%zu\n", strlcat(dst1, src3, 5));
	printf("%s\n", dst1);
}
