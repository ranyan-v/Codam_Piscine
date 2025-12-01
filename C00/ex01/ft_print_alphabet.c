/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:44:13 by rayan             #+#    #+#             */
/*   Updated: 2025/08/03 19:12:27 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	n;

	n = 'a';
	while (n <= 'z')
	{
		write(1, &n, 1);
		n++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	write(1, "\n", 1);
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_print_alphabet.c
