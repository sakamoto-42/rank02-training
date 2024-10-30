/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:03:02 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 09:29:19 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int	main(int argc, char **argv)
{
	if (argc - 1 == 2)
	{
		printf("%s\n%s\n%d\n", argv[1], argv[2], ft_strcmp(argv[1], argv[2]));
		return (0);
	}
	return (1);
}
*/
