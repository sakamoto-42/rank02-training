/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:30:31 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 12:30:51 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_str_find_char(char c, const char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;

	if (!s || !reject)
		return (0);
	count = 0;
	while (*s && !(ft_str_find_char(*s, reject)))
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
		printf("strcspn :%ld\n", strcspn(argv[1], argv[2]));
		printf("ft_strcspn :%ld\n", ft_strcspn(argv[1], argv[2]));
		return (0);
	}
	else
		return (1);
}*/
