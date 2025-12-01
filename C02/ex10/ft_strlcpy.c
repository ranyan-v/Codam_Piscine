/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:20:35 by rayan             #+#    #+#             */
/*   Updated: 2025/08/17 18:17:33 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_length(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_length(src));
}

// int	main(void)
// {
// 	char	src[] = "Hi I played pingpong";
// 	char	dest[5];

// 	printf("%u\n", ft_strlcpy(dest, src, sizeof(dest)));
// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);

// 	if (ft_strlcpy(dest, src, sizeof(dest)) >= sizeof(dest))
// 		printf("string is not complete\n");
// 	return(0);
// }
