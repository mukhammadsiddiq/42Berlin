/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:06:04 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/23 11:30:55 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_iterative_factorial(int nb);

/*int	main(void)
{
	for (int i = 0; i < 10; i++)
		printf("%d ----> %d\n", i, ft_iterative_factorial(i));
}*/

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		result *= nb;
		--nb;
	}
	return (result);
}
