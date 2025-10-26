/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:26:04 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/26 21:08:50 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Applies the function f to each character of the
	string s, passing its index as the first argument
	and the character itself as the second. A new
	string is created (using malloc(3)) to store the
	results from the successive applications of f.

RETURN VALUE
	The string created from the successive applications of ’f’.
	Returns NULL if the allocation fails.
*/

#include "libft.h"

char	function(unsigned int x, char c)
{
	(void)x;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		strlen;
	char	*ptr;

	strlen = ft_strlen(s);
	ptr = (char *)ft_calloc(strlen + 1, sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < strlen)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}

int	main(void)
{
	char	sentence[] = "Hello Wolrld";

	printf("\n[Sentence = %s]\n", sentence);
	printf("\n[strmapi  = %s]\n", ft_strmapi(sentence, function));
}
