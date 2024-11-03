/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:14:09 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/03 12:50:19 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

t_list *ft_lstnew(void *content)
{
	t_list *new = malloc(sizeof(t_list));
	if (!new)
		return NULL;
	if(content)
		new->content = content;
	else if (!content)
		new->content = NULL;
	new->next = NULL;
	return new;
}
