/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 19:02:50 by rayan             #+#    #+#             */
/*   Updated: 2025/08/18 14:17:36 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlen(char	*str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = (ft_strlen(dest));
	src_len = (ft_strlen(src));
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char src[] = " How is it possible?";
// 	char dest[] = "abc:P";
// 	unsigned int size = 25;

// 	printf("%s\n", dest);
// 	// printf("%zu\n", strlcat(dest, src, size));
// 	printf("%u\n", ft_strlcat(dest, src, size));
// 	printf("%s\n", dest);

// 	return (0);
// }
