/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:01:08 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 10:30:03 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	dest = (char *) malloc((src_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	char	*dest1;
	char	*dest2;

	if (argc - 1 == 1)
	{
		dest1 = strdup(argv[1]); 
		dest2 = ft_strdup(argv[1]); 
		printf("strdup :\n%s\n", dest1);
		free(dest1);
		printf("ft_strdup :\n%s\n", dest2);
		free(dest2);
		return (0);
	}
	return (1);
}
*/
