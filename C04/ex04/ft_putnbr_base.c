/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:16:07 by rayan             #+#    #+#             */
/*   Updated: 2025/08/20 17:06:04 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char	*base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int n, char *base)
{
	int		len;
	long	num;
	char	number;

	if (!base_check(base))
		return ;
	num = n;
	len = base_len(base);
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= len)
		ft_putnbr_base((int)(num / len), base);
	number = base[num % len];
	write(1, &number, 1);
}

// int	main(void)
// {
// 	int	n = -123456;
// 	char	base[] = "01";

// 	base_len(base);
// 	ft_putnbr_base(n, base);
// 	return (0);
// }
