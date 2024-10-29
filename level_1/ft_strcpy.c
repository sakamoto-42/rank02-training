/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:40:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 08:02:49 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
int	main(int argc, char **argv)
{
	char	*src;
	char	*dest;

	if (argc - 1 != 1)
		return (1);
	src = argv[1];
	dest = (char *) malloc((strlen(src) + 1) * sizeof(char));
	ft_strcpy(dest, src);
	printf("src : %s\ndest: %s\n", src, dest);
	return (0);
}
*/
