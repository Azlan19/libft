/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:46:31 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 11:25:40 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Allocates memory (using malloc(3)) and returns
	a string representing the integer received as an
	argument. Negative numbers must be handled.

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
	int			stepcount;

	big_n = n;
	intlen = ft_intlen(big_n);
	printf("Int length = %lld\n", intlen);
	ptr = (char *)malloc((intlen + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	sign = 0;
	if (big_n < 0)
	{
		sign = 1;
		big_n = -big_n;
	}
	printf("Sign = %d\n\n", sign);
	ptr[intlen] = '\0';
	stepcount = 1;
	while (big_n > 0)
	{
		ptr[intlen - 1] = (big_n % 10) + '0';
		big_n = big_n / 10;
		printf("Step %d:\n", stepcount);
		printf("n = %lld\n\n", big_n);
		intlen--;
		stepcount++;
	}
	if (sign == 1)
	{
		ptr[intlen - 1] = '-';
	}
	printf("Number = '%s'\n", ptr);
	return (NULL);
}

int	main(void)
{
	long long number = -2147483648;

	printf("\n[NUMBER = %lld]\n\n", number);
	ft_itoa(number);

	return (0);
}