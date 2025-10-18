/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:50:46 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/18 17:48:35 by oazlan           ###   ########.fr       */
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

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	const char	*ptr;

	ptr = 0;
	if (*needle == '\0')
	{
		return (haystack);
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == 0)
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return (ptr);
}
