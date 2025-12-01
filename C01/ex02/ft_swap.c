/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:14:20 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:10:01 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	one = 10;
// 	int	two = 100;
// 	int	*a = &one;
// 	int	*b = &two; //later there would be a smarter way :D

// 	printf("before one: %d\n", one);
// 	printf("before two: %d\n", two);
// 	ft_swap(a, b);
// 	printf("after one: %d\n", one);
// 	printf("after two: %d\n", two);
// 	return (0);
// }