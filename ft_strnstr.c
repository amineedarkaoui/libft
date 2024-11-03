/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 07:57:21 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/02 10:28:20 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	llen = ft_strlen(little);
	if (llen == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && big[i + j])
			j++;
		if (j == llen)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	printf("%p\n", ft_strnstr("aaxx", "xxs", 5));
// 	printf("%s\n", ft_strnstr("aaxx", "xx", 6));
// 	printf("%s\n", ft_strnstr("abc", "abc", 7));
// 	return (0);
// }
