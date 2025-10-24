/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:53:15 by oazlan            #+#    #+#             */
/*   Updated: 2025/10/24 11:53:19 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Includes -- BEGIN
# include <stdio.h>
# include <stdlib.h>
// Includes -- END

int		ft_isalpha(int c);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *s);

#endif