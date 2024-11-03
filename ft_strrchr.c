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
		if ((unsigned char)s[i] == (unsigned char)c)
			pointer = ((char *)(s + i));
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
	return (pointer);
}

// int main()
// {
// 	printf("%p\n", ft_strrchr("test", '\0'));
// 	return (0);
// }
