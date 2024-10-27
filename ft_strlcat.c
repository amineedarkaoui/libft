/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:48:40 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:19:13 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (i + j < size - 1 && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	j = ft_strlen(src);
	if (size < i)
		return (size + j);
	else
		return (i + j);
}

// void test_strlcat(char *dest, const char *src, size_t size) {
// 	printf("output: %zu, ", ft_strlcat(dest, src, size));
// 	printf("%s\n", dest);
// }

// int main()
// {
// 	char dest[100] = "hello";
// 	char src[] = "world";
// 	test_strlcat(dest, src, 100);
// 	return (0);
// }
