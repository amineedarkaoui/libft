/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:57:21 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 16:30:05 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (0);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = malloc(l1 + l2 + 1);
	if (result == 0)
		return (0);
	i = 0;
	while (i < l1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		result[i] = s2[i - l1];
		i++;
	}
	result[i] = 0;
	return (result);
}

// int main()
// {
// 	printf("%s\n", ft_strjoin("hello", " world"));
// 	return (0);
// }
