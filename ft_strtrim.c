/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:54:27 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 16:25:25 by oazlan           ###   ########.fr       */
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

int	trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		n;
	int		length;

	ptr = NULL;
	length = ft_strlen(s1);
	i = 0;
	while (trim(s1[i], set))
		i++;
	j = length - 1;
	while (trim(s1[j], set))
		j--;
	if (length <= 0 || i >= length)
		return (NULL);
	ptr = (char *)malloc((j - i) * sizeof(char));
	if (!ptr)
		return (NULL);
	n = 0;
	while (i <= j)
		ptr[n++] = s1[i++];
	ptr[n] = '\0';
	return (ptr);
}

// int main()
// {
//     char *s1 = "ababaaaMy name is Simonbbaaabbab";
//     char *set = "ab";

//     printf("\nBEFORE\n");
//     printf("s1 = '%s'\n", s1);
//     printf("set = [%s]\n", set);

//     printf("\nAFTER\n");
//     printf("ft_strtrim = '%s'\n\n", ft_strtrim(s1, set));

//     return (0);

// }
