/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:03:13 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/07 11:11:33 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void update(void *lst)
// {
// 	return ;
// }
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
// 	ft_lstiter(head,update);

// 	printf("\n");
// 	while(head)
// 	{
// 		printf("%s\t",(char *)head->content);
// 		head = head->next;
// 	}
// }