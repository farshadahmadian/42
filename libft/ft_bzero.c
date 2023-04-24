/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 10:20:08 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/26 11:16:45 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		*(p + i) = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char name[] = "Farshad";
// 	char name2[] = "Farshad";
// 	int i = 0;
// 	int j = 0;

// 	ft_bzero(name, 3);
// 	bzero(name2, 3);
// 	while (i < 8)
// 	{
// 		printf("%c\n", *(name + i));
// 		i++;
// 	}
// 	while (j < 8)
// 	{
// 		printf("%c\n", *(name2 + j));
// 		j++;
// 	}

// 	return (0);
// }