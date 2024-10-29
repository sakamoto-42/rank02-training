/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:13:37 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 10:41:24 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	to_search;
	char	to_replace;

	if (argc - 1 == 3)
	{
		str = argv[1];
		if (!argv[2][1] && !argv[3][1])
		{
			to_search = argv[2][0];
			to_replace = argv[3][0];
			// TESTS //
			/*
			if (strcmp(str, "Papache est un sabre") == 0 && to_search == 'a' && to_replace == 'o')
				printf("Popoche est un sobre\n");
			else if (strcmp(str, "zaz") == 0 && to_search == 'r' && to_replace == 'u')
				printf("zaz\n");
			if (strcmp(str, "ZoZ eT Dovid oiME le METol.") == 0 && to_search == 'o' && to_replace == 'a')
				printf("ZaZ eT David aiME le METal.\n");
			if (strcmp(str, "wNcOre Un ExEmPle Pas Facilw a Ecrirw ") == 0 && to_search == 'w' && to_replace == 'e')
				printf("eNcOre Un ExEmPle Pas Facile a Ecrire \n");
			*/
			while (*str)
			{
				if (*str == to_search)
					ft_putchar(to_replace);
				else
					ft_putchar(*str);
				str++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
