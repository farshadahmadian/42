/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:16:04 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/28 20:06:26 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char src[] = "Farshad";
// 	char dst1[20];

// 	size_t n1 = ft_strlcpy(dst1, src, 8);
// 	printf("sizeof(dst): %lu\n", sizeof(dst1));
// 	printf("USING FT_STRLCPY::::: %lu\n", n1);
// 	printf("dst: %s\n", dst1);
// 	printf("src: %s\n", src);
// 	printf("strcmp1 %d\n", strcmp(src, dst1));
// 	printf("----dst1:\n");
// 	printf("%c\n", dst1[strlen(src) + 1] );
// 	for (int i = 0; i < 8; i++)
// 	{
// 		printf("%c\n", dst1[i]);
// 	}

// 	char dst2[20];
// 	size_t n2 = strlcpy(dst2, src, 8);
// 	printf("USING STRLCPY::::: %lu\n", n2);
// 	printf("dst: %s\n", dst2);
// 	printf("src: %s\n", src);
// 	printf("----dst2:\n");
// 	printf("strcmp2 %d\n", strcmp(src, dst2));
// 	printf("%c\n", dst2[strlen(src) + 1] );
// 	for (int i = 0; i < 8; i++)
// 	{
// 		printf("%c\n", dst2[i]);
// 	}
// 	return (0);
// }
