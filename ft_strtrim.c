/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:22:54 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 18:06:25 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*result;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (len > 0 && is_set(s1[len - 1], set))
		len--;
	result = malloc(len - i + 1);
	if (result == 0)
		return (0);
	j = 0;
	while (i < len)
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	result[j] = 0;
	return (result);
}

// int main()
// {
// 	printf("%s\n", ft_strtrim("hello world", "hdle"));
// 	return (0);
// }
