/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:12:07 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 12:31:06 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_str_find_char(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;

	if (!s || !accept)
		return (0);
	count = 0;
	while (*s && ft_str_find_char(*s, accept))
	{
		count++;
		s++;
	}
	return (count);
}

/*
int	main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("strspn : %ld\n", strspn(argv[1], argv[2]));
		printf("ft_strspn : %ld\n", ft_strspn(argv[1], argv[2]));
		return (0);
	}
	return (1);
}
*/
