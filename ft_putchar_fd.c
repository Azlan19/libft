/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:09:28 by oazlan            #+#    #+#             */
/*   Updated: 2025/11/01 01:38:43 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Outputs the character ’c’ to the specified file
	descriptor.

RETURN VALUE
	None.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	char character = 'f';
// 	int file_descriptior = 1;

// 	ft_putchar_fd(character, file_descriptior);

// 	return (0);
// }
