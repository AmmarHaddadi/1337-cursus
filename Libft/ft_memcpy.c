/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:01:39 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/04 11:24:38 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// talamis
void * ft_memcpy(void * dst, const void * src, size_t n)
{
	if (dst == src)
		return dst;
	unsigned char *ori = dst;
	while (n-- > 0)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return ori;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *s = "Ammar";
// 	printf("%s", ft_memcpy(s, s, 5));
// 	// printf("%s", memcpy(s, s, 5));
// }

