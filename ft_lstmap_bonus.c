/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aedarkao <aedarkao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:26:49 by aedarkao          #+#    #+#             */
/*   Updated: 2024/11/01 21:30:54 by aedarkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	newlst = 0;
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			while (newlst)
			{
				ft_lstdelone(newlst, del);
				newlst = newlst->next;
			}
			return (0);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
