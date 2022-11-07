/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 17:41:27 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/07 18:51:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *head;
// 	t_list *new;
// 	char	*aaa;
// 	int i = 0;

// 	aaa = malloc(25 * sizeof(char));
// 	if (!aaa)
// 		return (0);
// 	ft_strlcpy(aaa, "sidubdgiu", 25);
// 	head = ft_lstnew((void *)aaa);
// 	while (i < 5)
// 	{
// 		new = ft_lstnew(trash);
// 		ft_lstadd_front(&head, new);
// 		i++;
// 	}
// 	printf("string of head is: %s\n", head->content);
// 	return (0);
// }

/*
Parameters:
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Description:
Adds the node ’new’ at the beginning of the list.
*/