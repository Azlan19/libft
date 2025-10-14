/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 09:23:56 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/14 13:21:14 by oazlan           ###   ########.fr       */
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
    unsigned char *ptr;
    ptr = b;
    while(len--)
    {
        *ptr = (unsigned char)c;
        ptr++;
    }
    return b;
}

// #include <stdio.h>
// #include <string.h>


// int	main(void)
// {
// 	char str1[20] = "Hello, World!";
// 	char str2[20] = "Hello, World!";

// 	printf("Before memset:\n");
// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n\n", str2);

// 	// Apply standard memset
// 	memset(str1 + 7, '*', 5);

// 	// Apply your ft_memset
// 	ft_memset(str2 + 7, '*', 5);

// 	printf("After memset:\n");
// 	printf("str1: %s\n", str1);
// 	printf("After ft_memset:\n");
// 	printf("str2: %s\n\n", str2);

// 	// Compare the results
// 	if (memcmp(str1, str2, sizeof(str1)) == 0)
// 		printf("✅ ft_memset works correctly!\n");
// 	else
// 		printf("❌ ft_memset does NOT match memset.\n");

// 	return (0);
// }
