/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:26:27 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/24 19:05:42 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t i;

	if (dstsize == 0)
		return ft_strlen(src);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;

	return ft_strlen(src);
}

// #include <stdio.h>

// int main()
// {
// 	char d[6] = "";
// 	const char *s = "abcd";
// 	printf("%zu",ft_strlcpy(d, s, 4));
// 	printf("\n%s", d);
// }
