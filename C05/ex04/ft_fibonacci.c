/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:38:04 by rayan             #+#    #+#             */
/*   Updated: 2025/08/21 16:34:24 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// int	main(void)
// {
// 	int	index = 6;

// 	printf("%d", ft_fibonacci(index));
// 	return (0);
// }
