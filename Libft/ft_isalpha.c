/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:34:37 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/24 13:27:50 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", isalpha('-'));
// }
