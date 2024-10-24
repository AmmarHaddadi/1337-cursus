/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:40:35 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/24 19:27:28 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t i = 0;
	char *str = (char *)b;
	while (i < len)
		str[i++] = (unsigned char) c;
	return str;
}

// #include <stdio.h>

// int main()
// {
// 	char tab[20];
// 	printf("%s",ft_memset(tab, 'a', 20));
// }

