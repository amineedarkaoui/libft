/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:44:48 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:47 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pointer;

	i = 0;
	pointer = 0;
	while (s[i])
	{
		if (s[i] == c)
			pointer = ((char *)(s + i));
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (pointer);
}

// int main()
// {
// 	printf("%s\n", ft_strrchr("cc", '\0'));
// 	printf("%s\n", ft_strrchr("7", 'e'));
// 	printf("%s\n", ft_strrchr("40", 'e'));
// 	printf("%s\n", ft_strrchr(" ", 'e'));
// 	printf("%s\n", ft_strrchr("hello woerls", 'e'));
// 	printf("%s\n", ft_strrchr(".", 'e'));
// 	printf("%s\n", ft_strrchr("p", 'e'));
// 	return (0);
// }
