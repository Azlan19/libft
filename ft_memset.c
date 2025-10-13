/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:56 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/13 15:58:37 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
    The memset() function writes len bytes of value c (converted to an
    unsigned char) to the string b.
     
RETURN VALUES
    The memset() function returns its first argument.*/
    

#include "libft.h"

void* ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i =  0;
    while(i < len)
    {
        b = c;
    }
}

int main()
{
    
}