/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:12:40 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/11 09:31:49 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, tmp);
		lst = lst->next;
	}
	return (node);
}
// void	*f(void *lst)
// {
// 	char	*str;

// 	str = ft_strdup((char *)lst);
// 	return ((void *)str);
// }
// void	del(void *lst)
// {
// 	free(lst);
// }
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*tmp;

// 	head = ft_lstnew(ft_strdup("salam"));
// 	a = ft_lstnew(ft_strdup("ana"));
// 	b = ft_lstnew(ft_strdup("taha"));
// 	head->next = a;
// 	a->next = b;
// 	tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\t", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	t_list *jedida = ft_lstmap(head, f, del);
// 	printf("\n");
// 	t_list *jj = jedida;
// 	while (jj)
// 	{
// 			printf("%s\t", (char *)jj->content);
// 			jj = jj->next;
// 	}

// 	ft_lstclear(&head, del);
// 	ft_lstclear(&jedida, del);
// }
