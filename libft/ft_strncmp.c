/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:34:42 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/14 10:34:18 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i] && s1[i] && s2[i]))
		{
			i++;
			continue ;
		}
		return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "\200";
// 	char s2[] = "\0";
// 	printf("--------: %c\n", -128);
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, 50));
// 	printf("trncmp: %d\n", strncmp(s1, s2, 50));
// 	strncmp(s1, s2, 3);
// 	return (0);
// }
