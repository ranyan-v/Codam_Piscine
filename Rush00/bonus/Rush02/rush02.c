/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:11:42 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 17:16:27 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int location_x, int location_y);

void	rush(int x, int y)
{
	int	location_x;
	int	location_y;
	int	max_int;

	max_int = 256;
	if (x < 1 || y < 1)
		write(1, "Try a number that's more than 0 :D\n", 36);
	else if (x > max_int || y > max_int)
		write(1, "Try a number that's less than 256 :D\n", 38);
	else
	{
		location_y = 1;
		while (location_y <= y)
		{
			location_x = 1;
			while (location_x <= x)
			{
				ft_putchar(x, y, location_x, location_y);
				location_x++;
			}
			write(1, "\n", 1);
			location_y++;
		}
	}
}
