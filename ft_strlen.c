/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:37:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/13 15:50:07 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


// int main()
// {
//     char *string = "testing";
//     printf("%zu\n", ft_strlen(string));
    
//     return 0;
// }
