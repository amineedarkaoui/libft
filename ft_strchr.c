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
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (0);
}

// int main()
// {
// 	printf("%s\n", ft_strchr("a", '\0'));
// 	printf("%s\n", ft_strchr("7", 'e'));
// 	printf("%s\n", ft_strchr("40", 'e'));
// 	printf("%s\n", ft_strchr(" ", 'e'));
// 	printf("%s\n", ft_strchr("hello woerls", 'e'));
// 	printf("%s\n", ft_strchr(".", 'e'));
// 	printf("%s\n", ft_strchr("p", 'e'));
// 	return (0);
// }
