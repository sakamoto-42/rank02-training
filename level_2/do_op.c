/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:05:02 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/29 16:42:09 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str)
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	ft_do_op(int first_operand, char operator, int second_operand)
{
	if (operator == '+')
		return (first_operand + second_operand);
	if (operator == '-')
		return (first_operand - second_operand);
	if (operator == '*')
		return (first_operand * second_operand);
	if (operator == '/' && second_operand != 0)
		return (first_operand / second_operand);
	if (operator == '%' && second_operand != 0)
		return (first_operand % second_operand);
	return (0);
}

void	ft_putnbr(int n)
{
	long long int	nb;

	nb = (long long int) n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr((int)(nb / 10));
	ft_putchar((char)(nb % 10 + '0'));
}

int	main(int argc, char **argv)
{
	int		first_operand;
	char	operator;
	int		second_operand;
	int		result;

	if (argc - 1 == 3)
	{
		// TESTS //
		/*
		if (strcmp(argv[1], "123") == 0 && argv[2][0] == '*' && strcmp(argv[3], "456") == 0)
			printf("56088\n");
		if (strcmp(argv[1], "9828") == 0 && argv[2][0] == '/' && strcmp(argv[3], "234") == 0)
			printf("42\n");
		if (strcmp(argv[1], "1") == 0 && argv[2][0] == '+' && strcmp(argv[3], "-43") == 0)
			printf("-42\n");
		*/
		first_operand = ft_atoi(argv[1]);
		operator = argv[2][0];
		second_operand = ft_atoi(argv[3]);
		result = ft_do_op(first_operand, operator, second_operand);
		ft_putnbr(result);
	}
	ft_putchar('\n');
	return (0);
}
