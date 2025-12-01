/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttelegin <ttelegin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:57:04 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 18:43:02 by ttelegin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int loc_x, int loc_y)
{
	if ((loc_x == 1 && loc_y == 1)
		|| ((loc_x == x && loc_y == y) && (x != 1) && (y != 1)))
		write(1, "A", 1);
	else if ((loc_x == x && loc_y == 1) || (loc_x == 1 && loc_y == y))
		write(1, "C", 1);
	else if (loc_x == 1 || loc_x == x || loc_y == 1 || loc_y == y)
		write(1, "B", 1);
	else
		write(1, " ", 1);
}
