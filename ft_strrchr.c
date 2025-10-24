/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:36:14 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 11:26:46 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
	The strrchr() function returns a pointer to the last occurrence of the
	character c in the string s.
	Here "character" means "byte"; these functions do not work with wide
	or multibyte characters.

RETURN VALUE
	The  strchr()  and  strrchr()  functions  return  a  pointer to the matched
	character or NULL if the character is not found.  The terminating null byte
	is considered part of the string, so that if c is specified as '\0', these
	functions return a pointer to the terminator.
*/

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	size;
	int	i;

	size = ft_strlen(s);
	if (s[size] == (char)c)
	{
		return (&s[size]);
	}
	i = 0;
	while ((size - 1 - i) >= 0)
	{
		if (s[size - 1 - i] == (char)c)
		{
			return (&s[size - 1 - i]);
		}
		i++;
	}
	return (NULL);
}
