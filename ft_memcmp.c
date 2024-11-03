/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:04:07 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:07 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s1 + i)) > *((unsigned char *)(s2 + i)))
			return (1);
		if (*((unsigned char *)(s1 + i)) < *((unsigned char *)(s2 + i)))
			return (-1);
		i++;
	}
	return (0);
}

// int main()
// {
// 	printf("%d %d\n", ft_memcmp(0, 0, 100), memcmp(0, 0, 100));
// 	printf("%d %d\n", ft_memcmp("", "helrld" , 6), memcmp("", "helrld" , 6));
// 	printf("%d %d\n", ft_memcmp("40", "e", 0), memcmp("40", "e", 0));
// 	printf("%d %d\n", ft_memcmp(" ", "e", 1), memcmp(" ", "e", 1));
// 	printf("%d %d\n", ft_memcmp("", "e", 20), memcmp("", "e", 20));
// 	printf("%d %d\n", ft_memcmp(".", "e", -1), memcmp(".", "e", -1));
// 	printf("%d %d\n", ft_memcmp("p", "e", 2), memcmp("p", "e", 2));
// 	return (0);
// }
