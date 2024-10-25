/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:30:31 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 14:44:43 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	const char *h;

	if (*needle == 0)
		return ((char *)haystack);
	char *n = NULL;
	while (*haystack)
	{
		n = (char *) needle;
		if (*haystack++ == *n++)
		{
			i = 1;
			h = haystack;
			while(*h++ == *n++ && i++ <= len)
			{
				if (*n == 0)
					return ((char *)haystack-1);
			}
		}
	}
	return NULL;
}

// #include <stdio.h>
// const char *largestring = "bbr1bar2bar3";
// const char *smallstring = "zed";

// int main()
// {
// 	printf("%s",ft_strnstr(largestring, smallstring, 10));
// }

