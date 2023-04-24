/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:49:04 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/31 19:09:14 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	int 	tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     int 	*p = ft_memchr(tab, -1, 7);
//     int 	*q = memchr(tab, -1, 7);
// 	printf("%p\n", p);
// 	printf("%p\n", q);
// 	// char	s[] = "Farshad";
// 	// int		c = 'x';
// 	// char	*p = ft_memchr(s, c, 30);
// 	// char	*q = memchr(s, c, 30);
// 	// printf("ft_memchr: found at address %p\n", p);
// 	// printf("memchr: found at address %p\n", q);
// 	// printf("p == q: %i\n", p == q);
// 	return (0);
// }
