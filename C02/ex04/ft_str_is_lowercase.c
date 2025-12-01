/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:41:37 by rayan             #+#    #+#             */
/*   Updated: 2025/08/13 13:25:39 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "";
// 	char	*str2 = "123456azAZ";
// 	char	*str3 = "abc123yz";
// 	char	*str4 = "abcdxyz";
// 	char	*str5 = "/ abz";

// 	printf("%d\n", ft_str_is_lowercase(str1));
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	printf("%d\n", ft_str_is_lowercase(str3));
// 	printf("%d\n", ft_str_is_lowercase(str4));
// 	printf("%d\n", ft_str_is_lowercase(str5));
// 	return (0);
// }
