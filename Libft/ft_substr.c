/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:48:12 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 21:46:02 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return NULL;
	unsigned int i = 0;
	while(i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return sub;
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s",ft_substr("xxabcxx", 3, 3));
// }

