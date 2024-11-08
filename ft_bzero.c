/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:45:30 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:57:37 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)(s + i)) = 0;
		i++;
	}
}

// int	main() {
// 	char *mem = malloc(5);
// 	memset(mem, 'e', 5);
//     ft_bzero(mem, 0);
// 	printf("%d\n", ft_strncmp(mem, "eeeee", 5));
// 	return (0);
// }
