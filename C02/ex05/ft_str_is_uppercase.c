/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:00:29 by rayan             #+#    #+#             */
/*   Updated: 2025/08/17 15:41:18 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char *str1 = "";
// 	char *str2 = "125ABZ";
// 	char *str3 = "abz";
// 	char *str4 = "ABZ";
// 	char *str5 = "/AB Z";

// 	printf("%d\n", ft_str_is_uppercase(str1));
// 	printf("%d\n", ft_str_is_uppercase(str2));
// 	printf("%d\n", ft_str_is_uppercase(str3));
// 	printf("%d\n", ft_str_is_uppercase(str4));
// 	printf("%d\n", ft_str_is_uppercase(str5));
// 	return (0);
// }
