/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:06:33 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 15:40:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_unique(char *str, int end, char c)
{
	int	i;

	i = 0;
	while (i < end)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_find_char(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc - 1 == 2)
	{
		i = 0;
		// TESTS //
		/*
		if (strcmp(argv[1], "padinton") == 0 && strcmp(argv[2], "paqefwtdjetyiytjneytjoeyjnejeyj") == 0)
			printf("padinto\n");
		else if (strcmp(argv[1], "ddf6vewg64f") == 0 && strcmp(argv[2], "gtwthgdwthdwfteewhrtag6h4ffdhsd") == 0)
			printf("df6ewg4\n");
		else if (strcmp(argv[1], "rien") == 0 && strcmp(argv[2], "cette phrase ne cache rien") == 0)
			printf("rien\n");
		*/
		while (argv[1][i])
		{
			if (i == 0 || ft_is_unique(argv[1], i, argv[1][i]))
			{
				if (ft_str_find_char(argv[1][i], argv[2]))
				{
					ft_putchar(argv[1][i]);
					argv[2]++;
				}
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
