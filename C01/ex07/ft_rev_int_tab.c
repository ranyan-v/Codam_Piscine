/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 18:23:10 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:10:29 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	while (i <= size / 2)
	{
		temp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = temp;
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int arr[] = {20, 21, 2220, 23, 24, 1000};
// 	int *tab = arr;
// 	int	size = sizeof(arr) / sizeof(int);

// 	printf("the original string is: %d %d %d %d %d\n",
// 		arr[0], arr[1], arr[2],arr[3],arr[4]);
// 	ft_rev_int_tab(tab, size);
// 	printf("the reversed string is: %d %d %d %d %d\n",
// 		arr[0], arr[1], arr[2],arr[3],arr[4]);
// 	return (0);
// }