/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:56:42 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 19:47:47 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = 1;
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	int	num = 2;
// 	int	power = 4;

// 	printf("%d", ft_recursive_power(num, power));
// 	return (0);
// }
