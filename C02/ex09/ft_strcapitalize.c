/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:02:48 by rayan             #+#    #+#             */
/*   Updated: 2025/08/17 15:59:11 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i = i + 1;
	}
	i = 0;
	if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i = 0;
	while (str[i])
	{
		if ((str[i] > 31 && str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z' && str[i] < 127)
			|| (str[i] == ' '))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "sgh+hgHF gFhhc ag";

// 	printf("Before: %s\n", str);
// 	printf("After: %s\n", ft_strcapitalize(str));
// 	return (0);
// }
