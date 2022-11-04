/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 14:18:13 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/04 17:39:03 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;
	void	*p_content;

	p_content = content;
	newnode = malloc(sizeof (t_list));
	if (newnode == NULL)
		return (NULL);
	newnode -> content = p_content;
	newnode -> next = NULL;
	return (newnode);
}

/*
Parameters:
content: The content to create the node with.

Return value:
The new node

External functs:
malloc

Description:
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
*/