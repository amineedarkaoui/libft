/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:03:29 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 21:26:00 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == src && n == 0) || n == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
		i++;
	}
	return (dest);
}

// int	main() {
// 	char src[] = "abcdefgi";
// 	char *dest = src + 2;
// 	char *result = memcpy(dest, src, 5);
// 	printf("%s\n", result);
// 	return (0);
// }
