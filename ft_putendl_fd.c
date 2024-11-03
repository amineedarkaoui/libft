/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:01:47 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 11:06:16 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}

// int	main()
// {
// 	int fd = open("myfile.txt", O_WRONLY);
// 	char str[] = "hello world";
// 	ft_putendl_fd(str, fd);
// 	close(fd);
// 	return (0);
// }
