/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:27:12 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/20 16:17:59 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(char *str);

/*int	main(int ac, char **av)
{
	int	result;
	int	result1;

	if (ac == 2)
	{
		result = ft_atoi(av[1]);
		result1 = atoi(av[1]);
		printf("my_atoi: %d\n library atoi %d\n", result, result1);
	}
	else
		return (0);
}*/

int	ft_atoi(char *str)
{
	int	number;
	int	minus;

	minus = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (minus % 2 != 0)
		return (-number);
	return (number);
}
