/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:49:20 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 17:19:56 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc - 1 == 1)
	{
		i = 0;
		str = argv[1];
		while (str[i])
			i++;
		while (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			i--;
		while (i > 0 && !(str[i - 1] == ' ' || str[i - 1] == '\t'))
			i--;
		while (str[i] && !(str[i] == ' ' || str[i] == '\t'))
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
