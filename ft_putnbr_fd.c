/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:59:26 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/22 21:06:42 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    Outputs the integer ’n’ to the specified file
    descriptor.

RETURN VALUE
    None.
*/



#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char nbr;

    nbr = 0;
    if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
    nbr = (n % 10) + '0';
    write(fd, &nbr, 1);
}

