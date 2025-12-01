/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:48:14 by rayan             #+#    #+#             */
/*   Updated: 2025/08/13 14:35:56 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "";
// 	char	*str2 = "123456azAZ";
// 	char	*str3 = "abcdxyz";
// 	char	*str4 = "ABCDXYZ";
// 	char	*str5 = "/ A";

// 	printf("%d\n", ft_str_is_alpha(str1));
// 	printf("%d\n", ft_str_is_alpha(str2));
// 	printf("%d\n", ft_str_is_alpha(str3));
// 	printf("%d\n", ft_str_is_alpha(str4));
// 	printf("%d\n", ft_str_is_alpha(str5));
// 	return (0);
// }
