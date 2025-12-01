/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:50:10 by rayan             #+#    #+#             */
/*   Updated: 2025/08/17 15:47:22 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char des;
// 	char *dest;

// 	src = "Helloooo";
// 	dest = &des;

// 	printf("%s", ft_strcpy(dest, src));
// 	// printf("%s", strcpy(dest, src));
// 	return (0);
// }
