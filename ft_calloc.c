/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:48:24 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 14:26:56 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*result;
	size_t			i;

	result = malloc(nmemb * size);
	if (result == 0)
		return (0);
	i = 0;
	while (i < nmemb * size)
	{
		result[i] = 0;
		i++;
	}
	return ((void *)result);
}

// int main()
// {
// 	int *array = ft_calloc(10, sizeof(int));
// 	for (int i = 0; i < 10; i++)
// 		printf("%d\n", array[i]);
// 	free(array);
// 	return (0);
// }
