/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:26:20 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:25 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)(s[i]) == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
	return (0);
}

// int main()
// {
// 	char test[] = "test";
// 	printf("%p: %p\n", test, ft_strchr(test, 1024));
// 	return (0);
// }
