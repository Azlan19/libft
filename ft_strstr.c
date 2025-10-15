/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:50:46 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/15 16:59:15 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
    The strstr() function finds the first occurrence of the substring needle in
    the string haystack.  The terminating null bytes ('\0') are not compared.

RETURN VALUE
    These functions return a pointer to the beginning of the located substring,
    or NULL if the substring is not found.
*/




#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;  
    int j;
    
    i = 0;
    while(haystack[i])
    {
        j = 0;
        
    }
}