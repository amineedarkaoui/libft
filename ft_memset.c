/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:24:19 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:21 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(s + i)) = (unsigned char) c;
		i++;
	}
	return (s);
}

// int	main() {
// 	char string[] = "hello world";
// 	char *new_str = memset(string, 'F', 100);
// 	printf("%s\n", string);
// 	return (0);
// }
