/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:10:04 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/30 19:01:41 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	string_length;

	string_length = ft_strlen(s);
	i = string_length;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char string[] = "Farshad Ahmadian Yazdi";
// 	char	*p = ft_strrchr(string, 'f');
// 	printf("ft_strrch: %p\n", p);
// 	char	*q = strrchr(string, 'f');
// 	printf("strrch: %p\n", q);
// 	printf("p == q: %d\n", p == q);
// 	return (0);
// }
