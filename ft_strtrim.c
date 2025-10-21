/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:54:27 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/21 14:56:39 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    Allocates memory (using malloc(3)) and returns a
    copy of ’s1’ with characters from ’set’ removed
    from the beginning and the end.

RETURN VALUE
    The trimmed string.
    NULL if the allocation fails.
*/



#include "libft.h"


size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    return i;
}




char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    int i;
    int j;
    // int first_index;
    // int last_index;
    int length;

    ptr = NULL;
    length = ft_strlen(s1);

    i = 0;
    j = 0;

    while(s1[i])
    {
        j = 0;
        while(set[j])
        {
            if (set[j] == s1[i])
            {
                i++;
                break;
            }
            j++;
        }
    }

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("length = %d\n", length);

    
    return ptr;
}

int main()
{
    char *s1 = "ababaaaMy name is Simonbbaaabbab";
    char *set = "ab";

    ft_strtrim(s1, set);

    // printf("\nBEFORE\n");
    // printf("s1 = '%s'\n", s1);
    // printf("set = [%s]\n", set);
    
    // printf("\nAFTER\n");
    // printf("ft_strtrim = '%s'\n\n", ft_strtrim(s1, set));

    return 0;
    
}
