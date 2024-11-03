/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 07:51:49 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 17:16:45 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

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

	result = malloc(get_size(n) + 1);
	if (!result)
		return (0);
	if (n == -2147483648)
	{
		ft_memcpy(result, "-2147483648", 12);
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
// 	printf("%zu\n", get_size(-2147483648));
// 	return (0);
// }
