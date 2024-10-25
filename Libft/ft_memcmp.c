/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:04:37 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 12:19:04 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s11 = (const unsigned char*) s1;
	const unsigned char *s22 = (const unsigned char*) s2;

	while (n-- > 0)
	{
		if (*s11 != *s22)
			return (*s11 -*s22);
		s11++;
		s22++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d",ft_memcmp("abc", "zbc", 3));
// }

