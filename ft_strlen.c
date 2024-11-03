/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:45:22 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:35 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (s[counter])
		counter++;
	return (counter);
}

// int main()
// {
// 	strlen(0);
// 	printf("%zu\n", ft_strlen("7"));
// 	printf("%zu\n", ft_strlen("40"));
// 	printf("%zu\n", ft_strlen(" "));
// 	printf("%zu\n", ft_strlen("hello worlzu"));
// 	printf("%zu\n", ft_strlen("."));
// 	printf("%zu\n", ft_strlen("p"));
// 	return (0);
// }
