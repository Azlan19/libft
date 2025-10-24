/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:55:52 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 11:25:46 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || 57 < c)
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_isdigit('A'));
//     printf("%d\n", ft_isdigit('5'));
//     printf("%d\n", ft_isdigit(9));
//     printf("%d\n", ft_isdigit('z'));
//     printf("%d\n", ft_isdigit('0'));

//     return (0);
// }
