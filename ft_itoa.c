/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 07:51:49 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 09:11:44 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	parse_num(int n, char *result, size_t *i)
{
	if (n < 10)
	{
		result[*i] = n + '0';
		(*i)++;
		return ;
	}
	parse_num(n / 10, result, i);
	result[*i] = (n % 10) + '0';
	(*i)++;
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	i;

	result = malloc(12);
	if (n == -2147483648)
	{
		result = "-2147483648";
		return (result);
	}
	i = 0;
	if (n < 0)
	{
		result[i] = '-';
		i++;
		n *= -1;
	}
	parse_num(n, result, &i);
	result[i] = 0;
	return (result);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }
