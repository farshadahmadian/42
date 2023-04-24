/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:07:07 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/14 09:59:01 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	initial_dst_length;
	size_t	src_length;

	i = 0;
	initial_dst_length = ft_strlen(dst);
	if (initial_dst_length > dstsize)
		initial_dst_length = dstsize;
	src_length = ft_strlen(src);
	if (dstsize > 0 && initial_dst_length < dstsize)
	{
		while (i < dstsize - initial_dst_length - 1 && src[i])
		{
			dst[initial_dst_length + i] = src[i];
			i++;
		}
		dst[initial_dst_length + i] = '\0';
	}
	return (initial_dst_length + src_length);
}

// int	main(void)
// {
// 	char src1[] = "Ahmadian";
// 	char dst1[50] = "Farshad";
// 	size_t n = ft_strlcat(dst1, src1, 16);
// 	n = 0;
// 	printf("dst1 after calling ft_strlcat %s\n", dst1);
// 	printf("src1 after calling ft_strlcat %s\n", src1);
// 	printf("RETURN is: %lu\n", n);
// 	for (int i = 0; i < 15; i++)
// 	{
// 		printf("%c\n", dst1[i]);
// 	}

// 	char src2[] = "Ahmadian";
// 	char dst2[50] = "Farshad";
// 	size_t n2 = strlcat(dst2, src2, 16);
// 	n2 = 0;
// 	printf("dst2 after calling ft_strlcat %s\n", dst2);
// 	printf("src2 after calling ft_strlcat %s\n", src2);
// 	printf("RETURN is: %lu\n", n2);
// 	for (int i = 0; i < 15; i++)
// 	{
// 		printf("%c\n", dst2[i]);
// 	}
// 	return (0);
// }
