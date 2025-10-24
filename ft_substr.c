/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:19:10 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 16:25:53 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a substring from the
    string ’s’. The substring starts at index ’start’ and has a maximum length
    of ’len’.

RETURN VALUE
	The substring. NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s[i])
	{
		return (NULL);
	}
	if (ft_strlen(s) < start)
	{
		return (NULL);
	}
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
