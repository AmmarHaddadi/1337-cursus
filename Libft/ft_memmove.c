/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:18:47 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:33 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// we use s inestead of src bash tb9a 3ndna wa7d copy original for reference
// d < s -> d comes before s
void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d = (unsigned char *) dst;
	const unsigned char *s = (const unsigned char *) src;

	if (d < s)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else
	{
		d += (len - 1);
		s += (len - 1);
		while (len-- > 0)
			*d-- = *s--;
	}
	return dst;
}

// #include <stdio.h>

// int main()
// {
// 	char s[] = "123456789";
// 	ft_memmove(s+2, s, sizeof(char) * 7);
// 	printf("%s", s);
// }

