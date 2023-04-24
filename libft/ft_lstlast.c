/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:56:09 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/11 18:32:56 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *lst;
// 	t_list *new;
// 	t_list *newer;
// 	t_list *last_node;
// 	lst = ft_lstnew("Ahmadian");
// 	new = ft_lstnew("Farshad");
// 	newer = ft_lstnew("Mr.");
// 	ft_lstadd_front(&lst, new);
// 	ft_lstadd_front(&lst, newer);
// 	last_node = ft_lstlast(lst);
// 	printf("%s\n", last_node -> content);
// 	return (0);
// }
