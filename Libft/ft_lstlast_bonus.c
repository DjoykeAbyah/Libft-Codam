/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 13:48:54 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/11 16:16:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
Parameters: 
lst: The beginning of the list.

Return value:

Last node of the list

Description Returns the last node of the list.
dont use pointers because you donot want to change
at the address just want to move to the end.
*/