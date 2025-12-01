/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:57:04 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 15:57:27 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int location_x, int location_y)
{
	if (location_y == 1 || location_y == y)
	{
		if (location_x == 1 || location_x == x)
			write(1, "o", 1);
		else
			write(1, "-", 1);
	}
	else
	{
		if (location_x == 1 || location_x == x)
			write(1, "|", 1);
		else
			write(1, " ", 1);
	}
}
