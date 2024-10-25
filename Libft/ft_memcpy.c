/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:01:39 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 08:16:05 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// talamis
void * ft_memcpy(void * dst, const void * src, size_t n)
{
	unsigned char *ori = dst;
	while (n-- > 0)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return ori;
}

// #include <stdio.h>

// int main()
// {
// 	char s[] = "Ammar";
// 	char d[6];
// 	printf("%s", ft_memcpy(d, s+2, sizeof(char) * 3));
// }

