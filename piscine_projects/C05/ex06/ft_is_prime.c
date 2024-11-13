/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:21:13 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/21 17:55:04 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb);

/*int	main(void)
{
	int	prime;

	prime = 96;
	if(ft_is_prime(prime))
		printf("the number is prime");
	else
		printf("none");
	
}*/

int	ft_is_prime(int nb)
{
	int	is_p;

	is_p = 2;
	if (nb <= 1)
		return (0);
	while (is_p <= nb / 2)
	{
		if (nb % is_p == 0)
			return (0);
		is_p++;
	}
	return (1);
}
