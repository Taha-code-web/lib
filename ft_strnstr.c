/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thelmy <thelmy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:40:40 by thelmy            #+#    #+#             */
/*   Updated: 2023/11/23 11:57:57 by thelmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlen;

	i = 0;
	needlen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && len > i)
	{
		if (ft_strncmp(haystack + i, needle, needlen) == 0
			&& needlen + i <= len)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	char str1 [] = "tahahelmy7o";
// 	char str2 [] = "helmy";
// 	printf("%s",ft_strnstr(str1, str2,9));
// }