/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:36:23 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 12:01:37 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	c = (unsigned char) c;
	unsigned char *ss = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*ss == c)
			return ss;
		ss++;
	}
	return NULL;
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s",ft_memchr("b1a22a33", 'a', 4));
// }

