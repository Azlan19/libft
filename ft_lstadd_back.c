/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:46:02 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 14:58:38 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Adds the node ’new’ at the end of the list.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return (NULL);
	}
	while ((*lst)->next)
	{
		lst = (*lst)->next;
	}
	(*lst)->content = new;
	new->next = NULL;
}
