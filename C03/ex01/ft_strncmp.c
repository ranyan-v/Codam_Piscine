/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:19:02 by rayan             #+#    #+#             */
/*   Updated: 2025/08/17 19:42:27 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char *s1 = "whaaat";
// 	char *s2 = "whaat noooo way";

// 	unsigned int	n = 5;
// 	printf("%d\n",ft_strncmp(s1, s2, n));
// 	printf("%d\n",strncmp(s1, s2, n));
// 	return (0);
// }
