/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 11:52:30 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/27 12:13:36 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p_dst;
	char	*p_src;
	size_t	i;

	p_dst = (char *)dst;
	p_src = (char *)src;
	i = 0;
	if (!dst && !src && len)
		return (NULL);
	while (i < len)
	{
		if (src < dst)
		{
		p_dst[len - 1 - i] = p_src[len - 1 - i];
		i++;
		}
		else
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (p_dst);
}

// int	main(void)
// {
// 	char	dst1[] = "Farshad";
// 	// char	src1[] = "?*&";
// 	char	dst2[] = "Farshad";
// 	// char	src2[] = "?*&";
// 	ft_memmove(dst1 + 1, dst1 + 2, 3);
// 	printf("dst1 After calling ft_memmove: %s\n", dst1);
// 	memmove(dst2 + 1, dst2 + 2, 3);
// 	printf("dst2 After calling memmove: %s\n", dst2);
// 	return (0);
// }