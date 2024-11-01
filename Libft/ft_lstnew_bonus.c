/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:14:09 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/01 11:14:05 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

t_list *ft_lstnew(void *content)
{
	t_list *new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return new;
}
