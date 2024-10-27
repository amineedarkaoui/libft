/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 06:36:07 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 15:21:20 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overlap(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (dest == src + i)
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		overlap;

	overlap = is_overlap(dest, src, n);
	if (!overlap)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		*((unsigned char *)(dest + i - 1)) = *((unsigned char *)(src + i - 1));
		i--;
	}
	return (dest);
}

// int	main() {
// 	char src[] = "hello world";
// 	char dest[] = "yoo wsup";
// 	char *result = ft_memmove(dest, src, 3);
// 	printf("%s\n", result);
// 	printf("%s\n", src);
// 	return (0);
// }
