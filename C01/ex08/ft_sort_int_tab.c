/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:23:28 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:12:24 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] >= tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int arr[5] = {200, 1, 20002, 2, 64};
// 	int *tab = arr;
// 	int	size = 5;

// 	printf("the original string is: %d %d %d %d %d\n",
// 		arr[0], arr[1], arr[2],arr[3],arr[4]);
// 	ft_sort_int_tab(tab, size);
// 	printf("the reversed string is: %d %d %d %d %d\n",
// 		arr[0], arr[1], arr[2],arr[3],arr[4]);
// 	return (0);
// }