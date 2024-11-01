/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:28:07 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/29 11:15:45 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !*lst || !del)
		return;
	t_list *current = *lst;
	while (current)
	{
		t_list *next_lst = current->next;
		del(current->content);
		free(current);
		current = next_lst;
	}
	*lst = NULL;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// // Helper function to create a new list node
// t_list *create_node(void *content)
// {
// 	t_list *node = malloc(sizeof(t_list));
// 	if (!node)
// 		return NULL;
// 	node->content = content;
// 	node->next = NULL;
// 	return node;
// }

// // Custom delete function for testing
// void del(void *content)
// {
// 	free(content);
// }

// // Test with an empty list
// void test_empty_list()
// {
// 	t_list *lst = NULL;
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("test_empty_list passed\n");
// 	else
// 		printf("test_empty_list failed\n");
// }

// // Test with a single node
// void test_single_node()
// {
// 	t_list *lst = create_node(malloc(1));
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("test_single_node passed\n");
// 	else
// 		printf("test_single_node failed\n");
// }

// // Test with multiple nodes
// void test_multiple_nodes()
// {
// 	t_list *lst = create_node(malloc(1));
// 	lst->next = create_node(malloc(1));
// 	lst->next->next = create_node(malloc(1));

// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("test_multiple_nodes passed\n");
// 	else
// 		printf("test_multiple_nodes failed\n");
// }

// int main()
// {
// 	test_empty_list();
// 	test_single_node();
// 	test_multiple_nodes();

// 	return 0;
// }


