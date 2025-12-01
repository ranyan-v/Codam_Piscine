/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:17:33 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:10:12 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 3;

// 	printf("before a=%d\n", a);
// 	printf("before b=%d\n", b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("after a=%d\n", a);
// 	printf("after b=%d\n", b);
// 	return (0);
// }