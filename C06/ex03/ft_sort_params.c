/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayan <rayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 17:04:20 by rayan             #+#    #+#             */
/*   Updated: 2025/08/19 21:40:16 by rayan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	k;

	k = 0;
	while (s1[k] && s1[k] == s2[k])
		k++;
	return (s1[k] - s2[k]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putstr(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc && argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1 && argv[i])
	{
		j = i + 1;
		while (j < argc && argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	ft_putstr(argc, argv);
}
