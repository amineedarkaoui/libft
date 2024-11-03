/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:09:24 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 11:17:52 by aedarkao         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	char	result[12];
	size_t	i;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
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
	ft_putstr_fd(result, fd);
}

// int	main()
// {
// 	int fd = open("myfile.txt", O_WRONLY);
// 	char str[] = " hello world!";
// 	ft_putnbr_fd(-234, fd);
// 	ft_putendl_fd(str, fd);
// 	close(fd);
// 	return (0);
// }
