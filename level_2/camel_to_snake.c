/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:26:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 15:42:59 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc - 1 == 1)
	{
		str = argv[1];
		// TESTS //
		/*
		if (strcmp(str, "hereIsACamelCaseWord") == 0)
			printf("here_is_a_camel_case_word\n");
		if (strcmp(str, "helloWorld") == 0)
			printf("hello_world\n");
		*/
		while (*str && !(ft_is_upper(*str)))
		{
			ft_putchar(*str);
			str++;
		}
		while (*str)
		{
			if (ft_is_upper(*str))
			{
				ft_putchar('_');
				ft_putchar(*str + 32);
			}
			else
				ft_putchar(*str);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
