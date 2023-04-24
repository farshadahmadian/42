/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:39:14 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/09 22:27:58 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*p;

	total_size = count * size;
	if (count != 0 && total_size / count != size)
		return (NULL);
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total_size);
	return (p);
}

// int	main(void)
// {
// 	char	*q;
// 	char	*p;
// 	q = (char *)ft_calloc(0, 0);
// 	p = (char *)calloc(0, 0);
// 	printf("%p\n", p);
// 	printf("%p\n", q);
// 	return (0);
// }
