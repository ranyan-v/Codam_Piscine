/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:53:50 by rayan             #+#    #+#             */
/*   Updated: 2025/08/18 14:17:57 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[] = "The rain in Spain falls mainly on the plains";
// 	char to_find[] = "ain";

// 	printf("%s\n", str);
// 	printf("%s\n", ft_strstr(str, to_find));
// 	printf("%s\n", strstr(str, to_find));
// 	return (0);
// }
