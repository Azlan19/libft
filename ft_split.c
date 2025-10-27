/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:44:52 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 22:01:33 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns an
	array of strings obtained by splitting ’s’ using
	the character ’c’ as a delimiter. The array must
	end with a NULL pointer.

RETURN VALUE
	The array of new strings resulting from the split.
	NULL if the allocation fails.
*/

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (s[i] != c && s[i])
	{
		counter++;
	}
	i++;
	while (s[i])
	{
		if ((s[i] != c) && (s[i - 1] == c))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

void	*free_everything(char **double_ptr, size_t words)
{
	size_t	m;

	m = 0;
	while (m < words)
	{
		free(double_ptr[m++]);
	}
	free(double_ptr);
	return (NULL);
}

char	*allocate_ptr(char const *s, int j)
{
	int		n;
	char	*ptr;

	ptr = (char *)ft_calloc(j + 1, sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	n = 0;
	while (n < j)
	{
		ptr[n] = s[n];
		n++;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	no_of_words;
	char	**double_ptr;

	no_of_words = count_words(s, c);
	double_ptr = (char **)ft_calloc(no_of_words + 1, sizeof(char *));
	if (!double_ptr)
		return (NULL);
	i = 0;
	while (i < no_of_words)
	{
		while (*s == c && *s)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		double_ptr[i] = allocate_ptr(s, j);
		if (!double_ptr)
			return (free_everything(double_ptr, i));
		s = s + j;
		i++;
	}
	return (double_ptr);
}

// int	main(void)
// {
// 	char	sentence[] = "    What a   wonderful world    ";
// 	char	delimeter;

// 	delimeter = ' ';
// 	printf("\n[SENTENCE = %s]\n", sentence);
// 	printf("\n[Number of words = %d]\n", count_words(sentence, delimeter));
// 	return (0);
// }

// int	main(void)
// {
// 	char	**result;
// 	char	str[] = "Hello world this is ft_split";
// 	char	delimiter = ' ';
// 	int		i = 0;

// 	result = ft_split(str, delimiter);
// 	if (!result)
// 	{
// 		printf("ft_split returned NULL\n");
// 		return (1);
// 	}

// 	printf("Splitting \"%s\" by '%c'\n\n", str, delimiter);
// 	while (result[i])
// 	{
// 		printf("result[%d] = \"%s\"\n", i, result[i]);
// 		i++;
// 	}

// 	// Free memory after testing
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);

// 	return (0);
// }
