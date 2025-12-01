/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:15:07 by rayan             #+#    #+#             */
/*   Updated: 2025/08/17 17:29:33 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Try me";
// 	char dest[20] = "Lulalala";
// 	unsigned int	nb = 5;

// 	printf("before:%s\n", dest);
// 	ft_strncat(dest, src, nb);
// 	// strncat(dest, src, nb);
// 	printf("after:%s\n", dest);
// 	return (0);
// }
