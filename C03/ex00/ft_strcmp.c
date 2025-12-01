/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:30:12 by rayan             #+#    #+#             */
/*   Updated: 2025/08/14 13:52:18 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	*s1 = "waiiiit";
// 	char	*s2 = "wait";

// 	printf("%d",ft_strcmp(s1, s2));
// 	printf("%d",strcmp(s1, s2));
// 	return (0);
// }
