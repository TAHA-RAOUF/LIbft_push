/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:22:28 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/07 10:59:45 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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

// 	ft_lstdelone(head,del);
// 	ft_lstdelone(a,del);
// 	ft_lstdelone(b,del);

// 	// head-> next = b;
// 	// printf("\n");
// 	// while(head)
// 	// {
// 	// 	printf("%s\t",(char *)head->content);
// 	// 	head = head->next;
// 	// }

// }