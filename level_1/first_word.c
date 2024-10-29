/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:20:07 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 07:29:47 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t')
			str++;
		while (*str && *str != ' ' && *str != '\t')
		{
			ft_putchar(*str);
			str++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
