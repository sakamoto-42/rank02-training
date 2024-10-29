/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:08:46 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 08:16:41 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc - 1 != 2)
		return (1);
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("before swap : a = %d ; b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after swap : a = %d ; b = %d\n", a, b);
	return (0);
}
*/
