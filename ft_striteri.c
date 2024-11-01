/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:29:53 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 21:08:20 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void test_ft(unsigned int a, char *c)
// {
// 	*c += a;
// }

// int main()
// {
// 	char s[] = "aaaaa";
// 	ft_striteri(s, test_ft);
// 	printf("%s\n", s);
// 	return (0);
// }
