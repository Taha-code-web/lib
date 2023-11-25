/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:31:07 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/25 17:35:10 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (newnode);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "taha";
// 	t_list *newnode = ft_lstnew(str);
// 	printf("%s", (char *)newnode -> content);
// }