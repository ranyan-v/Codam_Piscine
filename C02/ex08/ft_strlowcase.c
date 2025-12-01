/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:46:03 by rayan             #+#    #+#             */
/*   Updated: 2025/08/11 20:19:42 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "HjgfTUHGh";

// 	printf("Before:%s\n", str);
// 	printf("After:%s\n", ft_strlowcase(str));
// 	return (0);
// }
