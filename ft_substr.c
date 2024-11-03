/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:40:31 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 16:22:52 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s);
	if (slen < start + len)
		len = slen - start;
	result = malloc(len + 1);
	if (!result)
		return (0);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = 0;
	return (result);
}

// int main()
// {
// 	printf("%s\n", ft_substr("hello world", 4, 3));
// 	return (0);
// }
