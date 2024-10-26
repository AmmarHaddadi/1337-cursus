/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:06:47 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/26 08:24:10 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t sz = ft_strlen(s1) + ft_strlen(s2) + 1;
	char *s12 = malloc(sz);
	if (!s12)
		return NULL;
	ft_strlcat(s12, s1, sz);
	ft_strlcat(s12, s2, sz);
	return s12;
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s",ft_strjoin("abc", "xyz"));
// }

