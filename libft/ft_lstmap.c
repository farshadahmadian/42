/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fahmadia <fahmadia@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:59:55 by fahmadia          #+#    #+#             */
/*   Updated: 2023/04/13 10:01:26 by fahmadia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_root;
	t_list	*added_list;
	void	*modified_content;

	new_root = NULL;
	while (lst)
	{
		modified_content = f(lst -> content);
		added_list = ft_lstnew(modified_content);
		if (!added_list)
		{
			ft_lstclear(&new_root, del);
			free(modified_content);
			return (new_root);
		}
		ft_lstadd_back(&new_root, added_list);
		lst = lst -> next;
	}
	return (new_root);
}

// void	*multiply(void *num)
// {
// 	int	*a = (int *)num;
// 	// printf("%d\n", *(int *)num);
// 	*a *= 2;
// 	return (a);
// }

// void	delete(void *num)
// {
// 	int	*a = (int *)num;
// 	*a = 0;
// }

// int	main(void)
// {
// 	t_list	*root1 = NULL;
// 	t_list	*root2;
// 	t_list	*root3;
// 	int		num1 = 1;
// 	int		num2 = 2;
// 	int		num3 = 3;
// 	root1 = ft_lstnew(&num1);
// 	root2 = ft_lstnew(&num2);
// 	root3 = ft_lstnew(&num3);
// 	ft_lstadd_back(&root1, root2);
// 	ft_lstadd_back(&root1, root3);
// 	t_list *mapped_list = ft_lstmap(root1, multiply, delete);
// 	while (mapped_list)
// 	{
// 		printf("%d\n", *(int *)(mapped_list -> content));
// 		mapped_list = mapped_list -> next;
// 	}
// }
