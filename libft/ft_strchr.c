/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:38:15 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/02 12:53:27 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	string_length;
	size_t	i;

	string_length = ft_strlen(s);
	i = 0;
	while (i <= string_length)
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "Farshad";
// 	char		*p = ft_strchr(s, 'a');
// 	char		*q = strchr(s, 'a');

// 	printf("Address returned by ft_strchar: %p\n", p);
// 	printf("Address returned by strchar: %p\n", q);
// 	printf("p == q: %d\n", p == q);
// 	return (0);
// }
