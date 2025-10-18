/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:53:15 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/18 18:09:50 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
    The  memchr() function scans the initial n bytes of the memory area pointed to
    by s for the first instance of c. Both c and the bytes of the memory area pointed
    to by s are interpreted as unsigned char.

RETURN VALUE
    The memchr() function returns a pointer to the matching byte or NULL if the
    character does not occur in the given memory area.
*/



#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    unsigned char *s_ptr;

    s_ptr = (unsigned char*)s;

    i = 0;
    while(s_ptr[i] && i < n)
    {
        if(s_ptr[i] == (char)c)
        {
            return &s_ptr[i];
        }
        i++;
    }
    if(s_ptr[i] == (char)c)
    {
        return &s_ptr[i];
    }
    return NULL;    
}
