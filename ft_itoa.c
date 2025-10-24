/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:46:31 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 12:50:10 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns a string representing the
	integer received as an argument. Negative numbers must be handled.

RETURN VALUE
	The string representing the integer.
	NULL if the allocation fails.
*/

#include "libft.h"

long long	ft_intlen(long long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)malloc(nmemb * size);
	i = 0;
	if (!ptr || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	long long	intlen;
	char		*ptr;
	int			sign;
	long long	big_n;

	big_n = n;
	intlen = ft_intlen(big_n);
	ptr = (char *)ft_calloc(sizeof(char), intlen + 1);
	if (!ptr)
		return (NULL);
	sign = 0;
	if (big_n < 0)
	{
		sign = 1;
		big_n = -big_n;
	}
	while (big_n > 0)
	{
		ptr[intlen - 1] = (big_n % 10) + '0';
		big_n = big_n / 10;
		intlen--;
	}
	if (sign == 1)
		ptr[intlen - 1] = '-';
	return (ptr);
}

// int	main(void)
// {
// 	long long	number;

// 	// number = -123;
// 	number = -2147483648;
// 	printf("\n[NUMBER = %lld]\n", number);
// 	printf("\n[STRING = %s]\n\n", ft_itoa(number));
// 	return (0);
// }
