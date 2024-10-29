/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:18:05 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 10:21:11 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_alpha_base(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('a');
	if (c >= 'A' && c <= 'Z')
		return ('A');
	return (0);
}

int	main(int argc, char **argv)
{
	int		repeat;
	int		alpha_base;
	char	*str;

	if (argc - 1 == 1)
	{
		str = argv[1];
		// TESTS //
		/*
		if (strcmp(str, "abc") == 0)
			printf("abbccc\n");
		else if (strcmp(str, "Alex.") == 0)
			printf("Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.\n");
		else if (strcmp(str, "abacadaba 42!") == 0)
			printf("abbacccaddddabba 42!\n");
		*/
		while (*str)
		{
			alpha_base = ft_alpha_base(*str);
			if (alpha_base)
			{
				repeat = *str - alpha_base + 1;
				while (repeat--)
					ft_putchar(*str);
			}
			else
				ft_putchar(*str);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
