/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:40:11 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:10:17 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = &"try a string"[0];   //can be : char	*str = "try a string"
// 	ft_putstr(str);
// 	return (0);
// }
// new way to write:
// void	ft_putstr(char *str)
// {
// 	while (*str != '\0')
// 		str++;
// 	write(1, str, i);
// }