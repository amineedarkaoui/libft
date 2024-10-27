/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:07:05 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 10:33:55 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t			i;
	size_t			j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
		{
			count++;
			i += j;
		}
		if (s[i])
			i++;
	}
	return (count);
}

static void	cpy_strs(char const *s, char c, char **result)
{
	size_t			i;
	size_t			j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j > 0)
		{
			result[count] = ft_substr(s, i, j);
			count++;
			i += j;
		}
		if (s[i])
			i++;
	}
	result[count] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**result;

	len = count_words(s, c);
	result = malloc((len + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	cpy_strs(s, c, result);
	return (result);
}

// int main()
// {
// 	char **strs = ft_split("a   d hello world     hey   d     adddddd", ' ');
// 	int i = 0;
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	return (0);
// }
