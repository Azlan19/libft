/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 22:04:43 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 11:45:21 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isaplha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isaplha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

int	ft_isaplha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

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
//     printf("%i\n", ft_isalnum('A'));
//     printf("%i\n", ft_isalnum('Z'));
//     printf("%i\n", ft_isalnum('a'));
//     printf("%i\n", ft_isalnum('z'));
//     printf("%i\n", ft_isalnum('1'));
//     printf("%i\n", ft_isalnum('9'));
//     printf("%i\n", ft_isalnum('/'));
//     printf("%i\n", ft_isalnum(')'));

//     return (0);
// }