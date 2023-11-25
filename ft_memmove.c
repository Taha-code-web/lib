/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:32:07 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/22 14:54:13 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy (dst, src, len);
	return (dst);
}
// int main()
// {
// 	char src[] = "tahapiolo";
// 	char *dst = src + 1;
// 	printf("%s",ft_memmove(dst, src, 4));
// }