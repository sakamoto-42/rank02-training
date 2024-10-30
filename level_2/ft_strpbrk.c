/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:45:26 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 11:09:38 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

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

char	*ft_strpbrk(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (NULL);
	while (*s1)
	{
		if (ft_str_find_char(*s1, s2))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

/*
int	main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("strbrk :\n%s\n", strpbrk(argv[1], argv[2]));
		printf("ft_strbrk :\n%s\n", ft_strpbrk(argv[1], argv[2]));
		return (0);
	}
	return (1);
}
*/
