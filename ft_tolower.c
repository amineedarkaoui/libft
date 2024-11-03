/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:23:43 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 10:44:59 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

// int main()
// {
// 	printf("%c\n", ft_tolower('a'));
// 	printf("%c\n", ft_tolower('7'));
// 	printf("%c\n", ft_tolower(40));
// 	printf("%c\n", ft_tolower('Y'));
// 	printf("%c\n", ft_tolower('4'));
// 	printf("%c\n", ft_tolower('.'));
// 	printf("%c\n", ft_tolower('p'));
// }
