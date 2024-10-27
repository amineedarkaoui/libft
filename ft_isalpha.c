/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 07:58:36 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/26 13:57:46 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	c1;
	int	c2;

	c1 = (c >= 'a' && c <= 'z');
	c2 = (c >= 'A' && c <= 'Z');
	return (c1 || c2);
}

/*int main()
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('7'));
	printf("%d\n", ft_isalpha(40));
	printf("%d\n", ft_isalpha('Y'));
	printf("%d\n", ft_isalpha('4'));
	printf("%d\n", ft_isalpha('.'));
	printf("%d\n", ft_isalpha('p'));
}*/
