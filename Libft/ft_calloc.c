/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:39:40 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/31 15:28:33 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	if(count == 0 || size ==0)
		return malloc(1);
	void *space = malloc(count * size);
	if (!space)
		return NULL;
	ft_bzero(space, count * size);
	return space;
}
