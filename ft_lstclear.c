/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:33:30 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 15:37:44 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    Deletes and frees the given node and all its
    successors, using the function ’del’ and free(3).
    Finally, set the pointer to the list to NULL.

RETURN VALUE
    None.
*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    
}
