/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:19:00 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/21 14:49:36 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power);

/*int	main(void)
{
	int	nb;

	nb = 2;
	for (int i = -5; i < 10; i++)
		printf("%d --> %d ^ %d\n", nb, i, ft_recursive_power(nb, i));
}*/

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
		result = result * ft_recursive_power(nb, power - 1);
	return (result);
}
