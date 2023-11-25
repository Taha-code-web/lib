/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:11:22 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/25 17:31:19 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
// #include <stdio.h>
// int main()
// {
// 	t_list *head =  ft_lstnew("node one");
// 	head -> next = ft_lstnew("node two");
// 	head -> next -> next = ft_lstnew("node three");
// 	t_list *lastnode = ft_lstlast(head);
// 	printf("%s", lastnode -> content);
// }