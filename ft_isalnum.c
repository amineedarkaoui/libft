/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:43:28 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:57:42 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = (c >= 'a' && c <= 'z');
	c2 = (c >= 'A' && c <= 'Z');
	c3 = (c >= '0' && c <= '9');
	return (c1 || c2 || c3);
}

// int main()
// {
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('7'));
// 	printf("%d\n", ft_isalnum(40));
// 	printf("%d\n", ft_isalnum('Y'));
// 	printf("%d\n", ft_isalnum('4'));
// 	printf("%d\n", ft_isalnum('.'));
// 	printf("%d\n", ft_isalnum('p'));
// }
