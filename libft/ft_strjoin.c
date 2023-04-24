/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:55:27 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/04 16:46:39 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	size_t	total_size;
	char	*p_new_string;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	total_size = s1_length + s2_length + 1;
	p_new_string = malloc(total_size * sizeof(char));
	if (!p_new_string || (!s1 && !s2))
		return (NULL);
	ft_memcpy(p_new_string, s1, s1_length + 1);
	ft_strlcat(p_new_string, s2, total_size);
	return (p_new_string);
}

// int	main(void)
// {
// 	char *s1 = "wwwwwwwwwdwwwwwwwwwwww";
// 	char *s2 = "??????????";
// 	char *final_string = ft_strjoin(s1, s2);
// 	for (size_t i = 0; i < ft_strlen(final_string); i++)
// 	{
// 		printf("%c\n", final_string[i]);
// 	}
// 	printf("%s\n", final_string);
// 	printf("%lu\n", sizeof("Where is my molloc?"));
// 	printf("%lu\n", sizeof(final_string));
// 	return (0);
// }