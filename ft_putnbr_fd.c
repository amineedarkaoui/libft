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

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
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
