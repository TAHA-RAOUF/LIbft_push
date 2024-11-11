/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:27:54 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/07 16:56:03 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (*lst)
	{
		tmp = tmp->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	lst = NULL;
}
// int main()
// {
// 	t_list *head = ft_lstnew(ft_strdup("salam"));
// 	t_list *a = ft_lstnew(ft_strdup("ana"));
// 	t_list *b = ft_lstnew(ft_strdup("taha"));

// 	head->next = a;
// 	a->next =b;

// 	t_list *tmp = head;
// 	while(tmp)
// 	{
// 		printf("%s\t",(char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&head,del);
// 	// printf("\n");
// 	// while(head)
// 	// {
// 	// 	printf("%s\t",(char *)head->content);
// 	// 	head = head->next;
// 	// }
// }