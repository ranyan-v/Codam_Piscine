/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:36:42 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:10:22 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str = "Ran";
// 	int	length = ft_strlen(str);

// 	printf("the string is: %s\nthe string contains: %d characters\n",
// 		str, length);
// 	return (0);
// }