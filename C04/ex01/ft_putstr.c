/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:30:56 by rayan             #+#    #+#             */
/*   Updated: 2025/08/18 17:23:01 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	str[] = "again and again";

// 	ft_putstr(str);
// 	return (0);
// }
