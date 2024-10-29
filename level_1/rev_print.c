/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:15:35 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 10:21:34 by sakamoto-42      ###   ########.fr       */
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
	int		i;

	if (argc - 1 == 1)
	{
		str = argv[1];
		i = 0;
		while (str[i])
			i++;
		while (i--)
			ft_putchar(str[i]);
	}
	ft_putchar('\n');
	return (0);
}
