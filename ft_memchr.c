/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:22:23 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 10:05:58 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s + i)) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	unsigned int array[] = {9, 1, 4294967295};
// 	unsigned int *new_array = (unsigned int *) memchr(array, 255, 12);
// 	printf("%d", new_array[0]);
// 	printf("%p %p\n", ft_memchr("a", 5, 100), memchr("a", 5, 100));
// 	printf("%p %p\n", ft_memchr("", 4 , 6), memchr("", 4 , 6));
// 	printf("%p %p\n", ft_memchr("40", 1, 0), memchr("40", 1, 0));
// 	printf("%p %p\n", ft_memchr(" HellA", 0, 40), memchr(" HellA", 0, 40));
// 	printf("%p %p\n", ft_memchr("hello", 4, 0), memchr("hello", 4, 0));
// 	printf("%p %p\n", ft_memchr(".", "e", -1), memchr(".", "e", -1));
// 	printf("%p %p\n", ft_memchr("p", "e", 2), memchr("p", "e", 2));
// 	return (0);
// }
