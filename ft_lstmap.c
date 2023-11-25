/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:06:01 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/24 16:01:39 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstwo;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	lstwo = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&lstwo, del);
			return (NULL);
		}
		ft_lstadd_back(&lstwo, tmp);
		lst = lst->next;
	}
	return (lstwo);
}
