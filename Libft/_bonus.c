/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _bonus.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:53:14 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/29 17:55:49 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int ft_lstsize(t_list *lst)
{
	int count = 0;
	while(lst->next)
	{
		count++;
		lst = lst->next;
	}
	return count;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return;
	}
	while((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}

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

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while(lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

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
