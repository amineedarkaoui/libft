/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:52:42 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:57:52 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main()
// {
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('7'));
// 	printf("%d\n", ft_isascii(40));
// 	printf("%d\n", ft_isascii('Y'));
// 	printf("%d\n", ft_isascii('4'));
// 	printf("%d\n", ft_isascii('.'));
// 	printf("%d\n", ft_isascii(344));
// }
