/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:40:51 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/01 12:26:01 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;
	int		result_memcmp;

	i = 0;
	len_needle = ft_strlen(needle);
	if (!len_needle)
		return ((char *)(haystack));
	while (i < len)
	{
		if (!haystack[i])
			return (NULL);
		result_memcmp = ft_memcmp(haystack + i, needle, len_needle);
		if (result_memcmp == 0 && len_needle + i <= len)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char haystack[] = "Farshad Ahmadian Yazdi";
// 	char needle[] = "Ahmadi";
// 	char *p = ft_strnstr(haystack, needle, 14);
// 	char *q = strnstr(haystack, needle, 14);
// 	printf("HAYSTACK ADDRESS %p\n", haystack);
// 	printf("ft_strnstr: %p\n", p);
// 	printf("strnstr: %p\n", q);
// 	printf("p == q: %d\n", p == q);
// 	return (0);
// }
