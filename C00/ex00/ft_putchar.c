/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:00:32 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 18:12:11 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar('U');
//  write(1, "\n", 1);
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_putchar.c