/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:41:11 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 10:59:17 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_get_shift_val(char c)
{
	if (c >= 'a' && c <= 'z')
		return (-32);
	else if (c >= 'A' && c <= 'Z')
		return (32);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	shift_val;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		// TESTS //
		/*
		if (strcmp(str, "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et autojustification.") == 0)
			printf("l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTOJUSTIFICATION.\n");
		else if (strcmp(str, "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe. ") == 0)
			printf("s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE. \n");
		else if (strcmp(str, "3:21 Ba tOut moUn ki Ka di KE m'en Ka fe fot") == 0)
			printf("3:21 bA ToUT MOuN KI kA DI ke M'EN kA FE FOT\n");
		*/
		while (*str)
		{
			shift_val = ft_get_shift_val(*str);
			c = *str + shift_val;
			ft_putchar(c);
			str++;
		}
	}
	ft_putchar('\n');
	return (0);
}
