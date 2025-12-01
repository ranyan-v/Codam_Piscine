/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:43:20 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:10:06 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 3;
// 	int	div;
// 	int	mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div=%d\n", div);
// 	printf("mod=%d\n", mod);
// 	return (0);
// }