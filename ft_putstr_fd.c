/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:12:30 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/22 20:50:07 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
    Outputs the string ’s’ to the specified file
    descriptor.

RETURN VALUE
    None.
*/


#include "libft.h"
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while(s[i])
    {
        write(fd, &s[i++], 1);
    }
}
