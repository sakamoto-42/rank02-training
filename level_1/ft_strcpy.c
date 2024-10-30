/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:40:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 09:28:06 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char	*dest1;
	char	*dest2;

	if (argc - 1 != 1)
		return (1);
	src = argv[1];
	dest1 = (char *) malloc((strlen(src) + 1) * sizeof(char));
	strcpy(dest1, src);
	printf("strcpy :\nsrc : %s\ndest: %s\n", src, dest1);
	dest2 = (char *) malloc((strlen(src) + 1) * sizeof(char));
	ft_strcpy(dest2, src);
	printf("ft_strcpy :\nsrc : %s\ndest: %s\n", src, dest2);
	return (0);
}
*/
