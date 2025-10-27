/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:38:02 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 18:43:55 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns
	a new node. The ’content’ member variable is
	initialized with the given parameter ’content’.
	The variable ’next’ is initialized to NULL.

RETURN VALUE
	A pointer to the new node.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ptr;

	ptr = (t_list*)malloc(sizeof(t_list));
	if (!ptr)
	{
		return NULL;
	}
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
