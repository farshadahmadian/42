/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:56:18 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/29 15:29:31 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_toupper(int c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (c);
	else
	{
		c -= 32;
		return (c);
	}
}

// int	main(void)
// {
// 	int	c;

// 	c = 'f';
// 	printf("The result of ft_toupper is: %c\n", ft_toupper(c));
// 	printf("The result of toupper is: %c\n", toupper(c));
// 	return (0);
// }
