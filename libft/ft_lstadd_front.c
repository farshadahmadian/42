/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:51:17 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/11 17:35:05 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

// int	main(void)
// {	
// 	t_list *lst;
// 	t_list *new;
// 	t_list *newer;
// 	t_list *curr;

// 	lst = malloc(sizeof(lst));
// 	lst -> content = "Ahmadian";
// 	lst -> next = NULL;
// 	new = malloc(sizeof(lst));
// 	newer = malloc(sizeof(lst));
// 	if (!lst || !new || !newer)
// 		return (0);
// 	new = NULL;
// 	new = ft_lstnew("Farshad");
// 	newer = ft_lstnew("Mr.");
// 	ft_lstadd_front(&lst, new);
// 	ft_lstadd_front(&lst, newer);

// 	for (curr = newer; curr; curr = curr -> next)
// 	{
// 		printf("%s\n", curr -> content);
// 	}
// 	return (0);
// }
