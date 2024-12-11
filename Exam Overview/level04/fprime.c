/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:10:06 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/11 14:29:44 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *s)
{
	int number;

	number = 0;
	while (*s >= '0' && *s <= '9')
	{
		number *= 10;
		number += *s - 48;
		s++;
	}
	return (number);
}

int	is_prime(int num)
{
	int i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (-1);
		i++;
	}
	return (0);
}

void	get_result(int final)
{
	int	sum;
	int	prime;

	if (final == 1)
		write(1, "1", 1);
	prime = 2;
	while (sum != final)
	{

	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		get_result(ft_atoi(argv[1]));
		printf("%d\n", is_prime(3));
		printf("%d\n", is_prime(7));
		printf("%d\n", is_prime(10));
	write(1, "\n", 1);
}
