/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:26:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 16:00:18 by sakamoto-42      ###   ########.fr       */
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
	return (c >= 'A' && c <= 'Z');
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc - 1 == 1)
	{
		str = argv[1];
		i = 0;
		// TESTS //
		/*
		if (strcmp(str, "hereIsACamelCaseWord") == 0)
			printf("here_is_a_camel_case_word\n");
		if (strcmp(str, "helloWorld") == 0)
			printf("hello_world\n");
		*/
		while (str[i])
		{
			if (ft_is_upper(str[i]) && i != 0)
			{
				ft_putchar('_');
				ft_putchar(str[i] + 32);
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
