/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:11:11 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/31 19:38:03 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p;
	char	*q;
	size_t	i;

	p = (char *)s1;
	q = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] == q[i])
		{
			i++;
			continue ;
		}
		return ((int)((unsigned char)p[i] - (unsigned char)q[i]));
	}
	return (0);
}

// int	main(void)
// {
// 	char	name1[] = "Farshada";
// 	char	name2[] = "Farshadaa";
// 	int a = ft_memcmp(name1, name2, 80);
// 	int b = memcmp(name1, name2, 80);
// 	printf("ft_memcmp: %d\n", a);
// 	printf("memcmp: %d\n", b);
// 	return (0);
// }
