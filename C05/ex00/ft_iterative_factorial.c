/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:20:54 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 19:47:31 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		fac = 1;
		while (nb > 0)
		{
			fac = nb * fac;
			nb--;
		}
	}
	return (fac);
}

// int	main(void)
// {
// 	int	num = 68;

// 	printf("%d", ft_iterative_factorial(num));
// }
