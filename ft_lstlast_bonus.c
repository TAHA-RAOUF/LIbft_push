/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:13:54 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/05 13:14:13 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*last_node;

// 	head = ft_lstnew("First");
// 	ft_lstadd_front(&head, ft_lstnew("Second"));
// 	ft_lstadd_front(&head, ft_lstnew("Third"));
// 	last_node = ft_lstlast(head);
// 	printf("%s", (char *)last_node->content);
// }
