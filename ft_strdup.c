/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:35:30 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 14:52:28 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	i;

	result = malloc(ft_strlen(s) + 1);
	if (result == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		result[i] = s[i];
		i++;
	}
	result[i] = 0;
	return (result);
}

// int main()
// {
// 	printf("%s\n", ft_strdup("hello world"));
// 	return (0);
// }
