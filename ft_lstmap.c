/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:26:49 by aedarkao          #+#    #+#             */
/*   Updated: 2024/10/27 15:39:42 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new_node;
	t_list	*temp;

	newlst = 0;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		ft_lstadd_front(&newlst, new_node);
		temp = lst->next;
		ft_lstdelone(lst, del);
		lst = temp;
	}
	return (newlst);
}
