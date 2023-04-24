/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:53:53 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/03 12:15:54 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	total_size;
	char	*p_substring;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	total_size = (len + 1) * sizeof(char);
	p_substring = malloc(total_size);
	if (!p_substring)
		return (NULL);
	ft_strlcpy(p_substring, s + start, len + 1);
	return (p_substring);
}

// int	main(void)
// {
// 	// char s[] = "Farshad Ahmadian";
// 	char *substring1 = ft_substr("", 1, 1);
// 	printf("%p\n", substring1);
// 	// if (!substring1)
// 	// 	return (0);
// 	// while (*substring1)
// 	// {
// 	// 	printf("%c\n", *substring1);
// 	// 	substring1++;
// 	// }
// 	return (0);
// }
