/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:46:35 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/25 17:35:02 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
// #include <stdio.h>
// // int main()
// // {
// // 	t_list *head =  ft_lstnew("nodeone");
// // 	head -> next = ft_lstnew("nodetwo");
// // 	head -> next -> next = ft_lstnew("nodethree");
// // 	printf("%d", ft_lstsize(head));
// // }