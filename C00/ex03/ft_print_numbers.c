/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:30:19 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 19:13:43 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = '0';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	write(1, "\n", 1);
// 	return (0);
// }

//  cc -Wall -Wextra -Werror ft_print_numbers.c 