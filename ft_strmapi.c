/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:15:28 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 17:18:46 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

// char test_ft(unsigned int a, char c)
// {
// 	return (a + c);
// }

// int main()
// {
// 	char *s = "aaaaa";
// 	printf("%s\n", ft_strmapi(s, test_ft));
// 	return (0);
// }
