/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:59:26 by rayan             #+#    #+#             */
/*   Updated: 2025/08/13 13:25:30 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
// 	char	*str4 = "1234567890";
// 	char	*str5 = "/ 123";

// 	printf("%d\n", ft_str_is_numeric(str1));
// 	printf("%d\n", ft_str_is_numeric(str2));
// 	printf("%d\n", ft_str_is_numeric(str3));
// 	printf("%d\n", ft_str_is_numeric(str4));
// 	printf("%d\n", ft_str_is_numeric(str5));
// 	return (0);
// }
