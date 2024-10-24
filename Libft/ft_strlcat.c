/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:36:30 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/24 16:33:05 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"


size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t d_len;
	size_t i;

	d_len = ft_strlen(dst);
	if (dstsize == 0 || d_len >= dstsize)
		return (ft_strlen(dst) + ft_strlen(src));
	i = 0;
	while(src[i] && (d_len + i) < dstsize - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = 0;
	return (ft_strlen(dst) + ft_strlen(src));

}

#include <stdio.h>

// int main()
// {
// 	char d[6] = "123";
// 	const char *s = "456789";
// 	printf("%zu",ft_strlcat(d, s, 6));
// 	printf("\n%s", d);
// }

