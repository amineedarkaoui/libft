/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:14:42 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:58:54 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

// int main()
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('7'));
// 	printf("%c\n", ft_toupper(40));
// 	printf("%c\n", ft_toupper('Y'));
// 	printf("%c\n", ft_toupper('4'));
// 	printf("%c\n", ft_toupper('.'));
// 	printf("%c\n", ft_toupper('p'));
// }
