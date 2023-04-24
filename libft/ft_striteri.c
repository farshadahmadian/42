/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:12:30 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/09 11:25:26 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	s_length;

	i = 0;
	s_length = ft_strlen(s);
	while (i < s_length)
	{
		f(i, &s[i]);
		i++;
	}
}

// void	change_char(unsigned int i, char *c)
// {
// 	int	j;
// 	j = i;
// 	*c = '?';
// }

// int	main(void)
// {
// 	char name[] = "Farshad";
// 	ft_striteri(name, change_char);
// 	printf("Value of variable name after change_char() function applied:\n");
// 	printf("%s\n", name);
// 	return (0);
// }
