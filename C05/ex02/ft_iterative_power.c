/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:04:45 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 19:47:42 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	num = 2;
// 	int	power = 4;

// 	printf("%d", ft_iterative_power(num, power));
// 	return (0);
// }
