/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 17:50:32 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/07 19:19:09 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst != NULL)
	{
		(*lst) = (*lst)->next;	
	}
	if ((*lst)->next == NULL)
		new = (*lst)->content;
}

/*
Parameters:
lst: The address of a pointer
to the first link of a list.
new: The address of a pointer
to the node to be added to the list.

Description:
Adds the node ’new’ at the end of the list.
*/