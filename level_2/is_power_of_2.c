/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:46:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 16:43:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

/*
int	main(int argc, char **argv)
{
	unsigned long	val;
	unsigned int	n;

	if (argc - 1 == 1)
	{
		val = strtoul(argv[1], NULL, 10);
		if (val <= UINT_MAX)
		{
			n = (unsigned int) val;
			if (is_power_of_2(n))
				printf("%d is a power of 2", n);
			else
				printf("%d is not a power of 2", n);
			return (0);
		}
	}
	return (1);
}
*/
