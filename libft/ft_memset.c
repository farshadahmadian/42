/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:26:50 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/28 20:06:35 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	name[8];
// 	char	name2[8];

// 	name[0] = 'F';
// 	name[1] = 'a';
// 	name[2] = 'r';
// 	name[3] = 's';
// 	name[4] = 'h';
// 	name[5] = 'a';
// 	name[6] = 'd';
// 	name[7] = '\0';

// 	name2[0] = 'F';
// 	name2[1] = 'a';
// 	name2[2] = 'r';
// 	name2[3] = 's';
// 	name2[4] = 'h';
// 	name2[5] = 'a';
// 	name2[6] = 'd';
// 	name2[7] = '\0';
// 	printf("Before ft_memset, name: %s\n", name);
// 	printf("Before memset, name2: %s\n", name2);
// 	ft_memset(name, '?', 3);
// 	memset(name2, '?', 3);
// 	printf("Using ft_memset, name: %s\n", name);
// 	printf("Using memset, name2: %s\n", name2);
// 	return (0);
// }
