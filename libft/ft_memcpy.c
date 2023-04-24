/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 11:18:16 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/28 21:01:40 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;
	size_t		i;

	p_dst = (char *)dst;
	p_src = (char *)src;
	i = 0;
	if (!dst && !src && n)
		return (NULL);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	dst1[50] = "Farhsad";
// 	char	src1[] = "?*";
// 	ft_memcpy(dst1, src1, 2);
// 	printf("dst1 using ft_memcpy: %s\n", dst1);

// 	char	dst2[50] = "Farhsad";
// 	char	src2[] = "?*";
// 	memcpy(dst2, src2, 2);
// 	printf("dst2 using memcpy: %s\n", dst2);
// 	return (0);
// }
