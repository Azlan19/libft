/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 21:34:10 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 17:40:13 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%i\n", ft_isaplha('A'));
// 	printf("%i\n", ft_isaplha('Z'));
// 	printf("%i\n", ft_isaplha('a'));
// 	printf("%i\n", ft_isaplha('z'));
// 	printf("%i\n", ft_isaplha('1'));
// 	return (0);
// }
