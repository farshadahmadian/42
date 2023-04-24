/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:35:38 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/11 17:50:07 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		i;

	i = 0;
	current = lst;
	while (current)
	{
		current = current -> next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new;
// 	t_list *newer;

// 	lst = ft_lstnew("Yazdi");
// 	new = ft_lstnew("Ahmadian");
// 	newer = ft_lstnew("Farshad");
// 	ft_lstadd_front(&lst, new);
// 	ft_lstadd_front(&lst, newer);
// 	while (newer)
// 	{
// 		printf("%s\n", newer -> content);
// 		newer = newer -> next;
// 	}
// 	int lst_size = ft_lstsize(lst);
// 	printf("The size of the linked list is: %d\n", lst_size);
// 	return (0);
// }
