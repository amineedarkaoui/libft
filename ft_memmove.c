/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 06:36:07 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 15:47:12 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || n == 0)
		return (dest);
	if (dest < src || dest > src + n)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		*((unsigned char *)(dest + n - 1)) = *((unsigned char *)(src + n - 1));
		n--;
	}
	return (dest);
}

// int	main() {
// 	char src[] = "hello world";
// 	char *dest = src + 3;
// 	char *result = memcpy(0, 0, 5);
// 	printf("%s\n", result);
// 	printf("%s\n", src);
// 	return (0);
// }
