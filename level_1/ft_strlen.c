/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 07:54:00 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 08:04:36 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int	main(int argc, char **argv)
{
	if (argc - 1 != 1)
		return (1);
	printf("expected : %ld\n", strlen(argv[1]));
	printf("result : %d\n", ft_strlen(argv[1]));
}
*/
