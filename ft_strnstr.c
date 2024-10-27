/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 07:57:21 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:43 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// segfaults on undefined behavior
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	llen = 0;
	while (little[llen])
		llen++;
	if (llen == 0)
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && little[j] == big[i + j] && j < len)
			j++;
		if (j == len || j == llen)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	printf("%s\n", ft_strnstr("a", 0, 100));
// 	printf("%s\n", ft_strnstr("weldz hello !", "helrld" , 34));
// 	printf("%s\n", ft_strnstr("40", "e", 0));
// 	printf("%s\n", ft_strnstr(" ", "e", 1));
// 	printf("%s\n", ft_strnstr("", "e", 20));
// 	printf("%s\n", ft_strnstr(".", "e", -1));
// 	printf("%s\n", ft_strnstr("p", "e", 2));
// 	return (0);
// }
