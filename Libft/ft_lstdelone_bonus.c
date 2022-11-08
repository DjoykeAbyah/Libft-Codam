/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/08 15:20:11 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/08 18:51:31 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	temp = NULL;
	current = lst;
	if (lst->content == (*del))
	{
		*temp = *lst;
		lst = lst->next;
		free(temp);
	}
}

/*
Parameters:
lst: The node to free.
del: The address of the function used to delete
the content.

External functs: 
free

Description:
Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.
*/

// deze testen met malloc?