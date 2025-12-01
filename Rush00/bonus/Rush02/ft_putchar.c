/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:03:12 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 17:11:29 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int location_x, int location_y)
{
	if (location_y == 1)
	{
		if (location_x == 1 || location_x == x)
			write(1, "A", 1);
		else
			write(1, "B", 1);
	}
	else if (location_y == y)
	{
		if (location_x == 1 || location_x == x)
			write(1, "C", 1);
		else
			write(1, "B", 1);
	}
	else
	{
		if (location_x == 1 || location_x == x)
			write(1, "B", 1);
		else
			write(1, " ", 1);
	}
}
