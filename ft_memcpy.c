/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:05:40 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/14 15:10:03 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
    The memcpy() function copies n bytes from memory area src to memory area dest.
    The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.

RETURN VALUE
    The memcpy() function returns a pointer to dest.
*/


#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    
    const unsigned char *src_temp;
    unsigned char *dest_temp;

    if (dest == 0 || src == 0)
    {
        return dest;
    }
    
    src_temp = (const unsigned char*)src;
    dest_temp = (unsigned char*)dest;

    
    i = 0;
    while(i < n)
    {
        dest_temp[i] = src_temp[i];
        i++;
    }
    return dest;
}


// #include <stdio.h>
// #include <string.h>


// int	main(void)
// {
// 	char src1[] = "Hello, World!";
// 	char src2[] = "Hello, World!";
// 	char dest1[20];
// 	char dest2[20];

// 	// --- Test 1: Basic copy ---
// 	printf("Test 1: Basic copy\n");
// 	memcpy(dest1, src1, 6);
// 	ft_memcpy(dest2, src2, 6);
// 	printf("memcpy:    %s\n", dest1);
// 	printf("ft_memcpy: %s\n", dest2);
// 	printf("%s\n\n", memcmp(dest1, dest2, 20) == 0 ? "✅ Same result" : "❌ Different result");

// 	// --- Test 2: Copy with null bytes ---
// 	printf("Test 2: Copy with null bytes\n");
// 	char src3[10] = {'A', 'B', '\0', 'C', 'D', '\0'};
// 	char src4[10] = {'A', 'B', '\0', 'C', 'D', '\0'};
// 	char dest3[10] = {0};
// 	char dest4[10] = {0};

// 	memcpy(dest3, src3, 6);
// 	ft_memcpy(dest4, src4, 6);

// 	printf("memcpy bytes:    ");
// 	for (int i = 0; i < 6; i++) printf("%02x ", (unsigned char)dest3[i]);
// 	printf("\n");

// 	printf("ft_memcpy bytes: ");
// 	for (int i = 0; i < 6; i++) printf("%02x ", (unsigned char)dest4[i]);
// 	printf("\n");
// 	printf("%s\n\n", memcmp(dest3, dest4, 6) == 0 ? "✅ Same result" : "❌ Different result");

// 	// --- Test 3: Copy 0 bytes ---
// 	printf("Test 3: Copy 0 bytes\n");
// 	strcpy(dest1, "ABC");
// 	strcpy(dest2, "ABC");
// 	memcpy(dest1, "XYZ", 0);
// 	ft_memcpy(dest2, "XYZ", 0);
// 	printf("memcpy:    %s\n", dest1);
// 	printf("ft_memcpy: %s\n", dest2);
// 	printf("%s\n\n", memcmp(dest1, dest2, 20) == 0 ? "✅ Same result" : "❌ Different result");

// 	// --- Test 4: Overlapping regions (undefined behavior, for curiosity) ---
// 	printf("Test 4: Overlapping regions (memmove should be used instead)\n");
// 	char overlap1[20] = "Overlap test!";
// 	char overlap2[20] = "Overlap test!";

// 	memcpy(overlap1 + 2, overlap1, 10);     // undefined behavior
// 	ft_memcpy(overlap2 + 2, overlap2, 10);  // also undefined
// 	printf("memcpy:    %s\n", overlap1);
// 	printf("ft_memcpy: %s\n", overlap2);
// 	printf("⚠️  Results may differ (this is expected — use memmove instead)\n\n");

// 	return 0;
// }

