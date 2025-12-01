/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:05:23 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 20:02:17 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int loc_x, int loc_y);

void	rush(int x, int y)
{
	int	loc_x;
	int	loc_y;
	int	max_int;

	max_int = 256;
	if (x < 1 || y < 1)
		write(1, "Try a number that's more than 0 :D\n", 36);
	else if (x > max_int || y > max_int)
		write(1, "Try a number that's less than 256 :D\n", 38);
	else
	{
		loc_y = 1;
		while (loc_y <= y)
		{
			loc_x = 1;
			while (loc_x <= x)
			{
				ft_putchar(x, y, loc_x, loc_y);
				loc_x++;
			}
			write(1, "\n", 1);
			loc_y++;
		}
	}
}
