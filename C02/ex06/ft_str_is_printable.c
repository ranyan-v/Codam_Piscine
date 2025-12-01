/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:09:58 by rayan             #+#    #+#             */
/*   Updated: 2025/08/13 16:40:17 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 31 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "";
// 	char	*str2 = "\a hsgjds";
// 	char	*str3 = " 12azAZ";

// 	printf("%d\n",ft_str_is_printable(str1));
// 	printf("%d\n",ft_str_is_printable(str2));
// 	printf("%d\n",ft_str_is_printable(str3));
// 	return (0);
// }
