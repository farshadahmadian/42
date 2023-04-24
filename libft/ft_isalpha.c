/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:35:21 by fahmadia          #+#    #+#             */
/*   Updated: 2023/03/17 12:33:42 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'F';
// 	if (ft_isalpha(c) == 1)
// 		printf("The input is an alphabat.\n");
// 	else
// 		printf("The input is not an alphabat.\n");
// 	if (isalpha(c) == 1)
// 		printf("The input is an alphabat.\n");
// 	else
// 		printf("The input is not an alphabat.\n");
// 	return (0);
// }
