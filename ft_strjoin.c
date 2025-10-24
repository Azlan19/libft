/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:44:18 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 11:26:29 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a
	new string, which is the result of concatenating
	’s1’ and ’s2’.

RETURN VALUE
	The new string.
	NULL if the allocation fails.
*/

#include "libft.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		total_length;
	char	*ptr;

	total_length = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((total_length * sizeof(char)) + 1);
	if (!ptr)
		i = 0;
	while (s1[i])
	{
		ptr[i++] = s1[i];
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}
