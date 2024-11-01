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
	t_list	*new_node;
	t_list	*temp;

	newlst = 0;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		ft_lstadd_back(&newlst, new_node);
		temp = lst->next;
		ft_lstdelone(lst, del);
		lst = temp;
	}
	return (newlst);
}

// void printlst(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d\n", *((int *)(lst->content)));
// 		lst = lst->next;
// 	}
// }

// int main()
// {
// 	t_list *list = 0;
// 	int i = 0;
// 	int lstarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	while (i < 10)
// 	{
// 		t_list *new_node = ft_lstnew(lstarray + i);
// 		ft_lstadd_back(&list, new_node);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < 10)
// 	{
// 		t_list *new_node = ft_lstnew(lstarray + i);
// 		ft_lstadd_front(&list, new_node);
// 		i++;
// 	}
// 	printlst(list);
// 	return (0);
// }
