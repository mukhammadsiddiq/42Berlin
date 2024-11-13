/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:25:14 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/22 03:04:48 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power);

/*int	main(void)
{
	int	nb;

	nb = 2;
	for (int i = -5; i <= 10; i++)
		printf("%d --> ^  %d = %d\n", nb, i, ft_iterative_power(nb, i));
}*/

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
