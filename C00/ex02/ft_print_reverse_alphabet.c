/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:52:04 by rayan             #+#    #+#             */
/*   Updated: 2025/08/21 15:01:15 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	n;

	n = 122;
	while (n >= 97)
	{
		write(1, &n, 1);
		n--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	write(1, "\n", 1);
// 	return (0);
// }

// cc -Wall -Wextra -Werror ft_print_reverse_alphabet.c
//122 >> letter z, 97 >> letter a