/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:22:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/14 14:03:28 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
    The bzero() function erases the data in the n bytes of the memory starting at
    the location pointed to by s, by writing zeros (bytes containing '\0') to that area.

RETURN VALUE
    None.
*/


#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = (unsigned char*)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

// #include <strings.h>

// int main()
// {
//     char string_1[] = "Hello world";
//     char string_2[] = "Hello world";

//     printf("BEFORE:\n");
//     printf("str1 = %s\n", string_1);
//     printf("str2 = %s\n\n", string_2);
    
//     bzero(string_1, 2);
//     ft_bzero(string_2, 2);
    
//     printf("AFTER:\n");
//     printf("str1 = %s\n", string_1);
//     printf("str2 = %s\n\n", string_2);

//     return 0;
// }
