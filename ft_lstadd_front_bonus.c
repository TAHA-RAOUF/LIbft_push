/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moraouf <moraouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:12:22 by moraouf           #+#    #+#             */
/*   Updated: 2024/11/05 16:58:47 by moraouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main() {
//     t_list *head = NULL;
//     t_list *node1 = ft_lstnew("123");
//     t_list *node2 = ft_lstnew("Second");

//     ft_lstadd_front(head, node1);
//     ft_lstadd_front(head, node2);
//
//     t_list *current = head;
//     while (current) {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//
//
// // }
