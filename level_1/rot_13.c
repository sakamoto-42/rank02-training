/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:25:06 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 10:50:23 by sakamoto-42      ###   ########.fr       */
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
			printf("nop\n");
		else if (strcmp(str, "My horse is Amazing.") == 0)
			printf("Zl ubefr vf Nznmvat.\n");
		else if (strcmp(str, "AkjhZ zLKIJz , 23y") == 0)
			printf("NxwuM mYXVWm , 23l\n");
		*/
		while (*str)
		{
			alpha_base = ft_get_alpha_base(*str);
			if (alpha_base)
				c = ((*str - alpha_base + 13) % 26 + alpha_base);
			else
				c = *str;
			ft_putchar(c);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
