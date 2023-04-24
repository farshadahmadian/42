/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 18:02:27 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/09 11:11:55 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	size_t	s_length;
	size_t	i;
	char	*p;

	s_length = ft_strlen(s);
	i = 0;
	p = (char *)malloc((s_length + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i < s_length)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// char	compare(unsigned int i, char c)
// {
// 	int is_capital_letter = c >= 'A' && c <= 'Z';
// 	if (is_capital_letter)
// 		printf("%c is a capital letter: s[%d] = %c\n",c, i, c);
// 	return (c);
// }

// int main(void)
// {
// 	char name[] = "Farshad Ahmadian Yazdi";
// 	ft_strmapi(name, compare);
// 	return (0);
// }
