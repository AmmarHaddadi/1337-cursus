/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:50:17 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/29 16:53:00 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static void del_all(t_list *head, void (*del)(void *))
{
	while(head)
	{
		t_list *free_me = head;
		del(head->content);
		head = head->next;
		free(free_me);
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f || !del)
		return NULL;

	t_list *new = malloc(sizeof(t_list));
	if (!new)
		return NULL;
	t_list *head = new;
	while(lst)
	{
		new->content = f(lst->content);
		if (lst->next)
		{
			new->next = malloc(sizeof(t_list));
			if (!new->next)
			{
				del_all(head, del);
				return NULL;
			}
			new = new->next;
			lst = lst->next;
		}
		else
		{
			new->next = NULL;
			break;
		}
	}
	return head;
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

// // Helper function to delete a list node
// void delete_node(void *content)
// {
// 	free(content);
// }

// // Function to apply to each node's content
// void *duplicate_content(void *content)
// {
// 	int *new_content = malloc(sizeof(int));
// 	if (!new_content)
// 		return NULL;
// 	*new_content = *(int *)content * 2; // Duplicate and multiply by 2
// 	return new_content;
// }

// // Corrected retadd function
// int *retadd(int a)
// {
// 	int *b = malloc(sizeof(int));
// 	if (b == NULL)
// 	{
// 		return NULL; // Handle memory allocation failure
// 	}
// 	*b = a;
// 	return b;
// }

// // Function to clear the list
// void ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list *temp;
// 	while (*lst)
// 	{
// 		temp = (*lst)->next;
// 		del((*lst)->content);
// 		free(*lst);
// 		*lst = temp;
// 	}
// }

// // Main function to run tests
// int main()
// {
// 	t_list *ls1 = malloc(sizeof(t_list));
// 	t_list *ls2 = malloc(sizeof(t_list));
// 	t_list *ls3 = malloc(sizeof(t_list));

// 	ls1->content = retadd(5);
// 	ls1->next = ls2;
// 	ls2->content = retadd(6);
// 	ls2->next = ls3;
// 	ls3->content = retadd(7);
// 	ls3->next = NULL;

// 	t_list *new = ft_lstmap(ls1, duplicate_content, delete_node);

// 	printf("%d\n", *(int*)new->next->content); // Should print 16

// 	// Free allocated memory
// 	ft_lstclear(&new, delete_node);
// 	ft_lstclear(&ls1, delete_node);

// 	return 0;
// }
