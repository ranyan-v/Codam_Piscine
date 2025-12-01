/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 20:18:42 by rayan             #+#    #+#             */
/*   Updated: 2025/08/11 20:17:35 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	unsigned int	n;
// 	char	des;
// 	char	*src;
// 	char	*dest;

// 	n = 6;
// 	src = "I am Ran.";
// 	dest = &des;
// 	printf("%s", ft_strncpy(dest, src, n));
// 	return (0);
// }
