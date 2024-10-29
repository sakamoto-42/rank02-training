/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:59:21 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 15:25:15 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_get_alpha_base(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('a');
	if (c >= 'A' && c <= 'Z')
		return ('A');
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		alpha_base;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		// TESTS //
		/*
		if (strcmp(str, "abc") == 0)
			printf("zyx\n");
		if (strcmp(str, "My horse is Amazing.") == 0)
			printf("Nb slihv rh Znzarmt.\n");
		*/
		while (*str)
		{
			alpha_base = ft_get_alpha_base(*str);
			if (alpha_base)
				c = alpha_base + 25 - *str + alpha_base;
			else
				c = *str;
			ft_putchar(c);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
