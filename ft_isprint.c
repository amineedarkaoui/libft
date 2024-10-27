/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:36:59 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:57:58 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main()
// {
// 	printf("%d\n", ft_isprint('a'));
// 	printf("%d\n", ft_isprint('7'));
// 	printf("%d\n", ft_isprint(40));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", ft_isprint('.'));
// 	printf("%d\n", ft_isprint('p'));
// }
