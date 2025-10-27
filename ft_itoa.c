/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:46:31 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/27 09:59:30 by oazlan           ###   ########.fr       */
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
	if (n == 0)
		ptr[intlen - 1] = 0 + '0';
	sign = 0;
	if (big_n < 0)
	{
		sign = 1;
		ptr[0] = '-';
	}
	while (big_n > 0)
	{
		ptr[intlen - 1] = (big_n % 10) + '0';
		big_n = big_n / 10;
		intlen--;
	}
	return (ptr);
}

// int	main(void)
// {
// 	long long	number;

// 	// number = -123;
// 	// number = -2147483648;
// 	number = 0;
// 	printf("\n[NUMBER = %lld]\n", number);
// 	printf("\n[STRING = %s]\n\n", ft_itoa(number));
// 	return (0);
// }
