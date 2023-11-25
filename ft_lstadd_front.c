/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:27:47 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/25 17:34:44 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main()
// {
// 	t_list *head = NULL;

// 	ft_lstadd_front(&head, ft_lstnew("nodethree"));
// 	ft_lstadd_front(&head, ft_lstnew("nodetwo"));
// 	ft_lstadd_front(&head, ft_lstnew("nodeone"));

// 	while(head != NULL)
// 	{
// 		printf("%s\n", head -> content);
// 		head = head -> next;
// 	}
// }