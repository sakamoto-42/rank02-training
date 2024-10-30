/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:30:17 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/10/30 11:55:24 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char *c1, char *c2)
{
	char	temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

char	*ft_strrev(char *str)
{
	int		start;
	int		end;

	end = ft_strlen(str) - 1;
	start = 0;
	while (end > start)
	{
		ft_swap(&str[start], &str[end]);
		start++;
		end--;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{
	if (argc - 1 == 1)
	{
		printf("%s", ft_strrev(argv[1]));
		return (0);
	}
	return (1);
}
*/
