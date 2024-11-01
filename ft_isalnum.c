/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:43:28 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 10:10:49 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
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
