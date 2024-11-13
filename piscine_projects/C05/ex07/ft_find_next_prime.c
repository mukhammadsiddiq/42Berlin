/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:25:20 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/21 20:25:47 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb);
int	ft_find_next_prime(int nb);

/*int	main(void)
{
	int	is_prime;
	int	next_prime;

	is_prime = 84;
	next_prime = ft_find_next_prime(is_prime);
	printf("%d next prime", next_prime);
}*/

int	ft_find_prime(int nb)
{
	int	check;

	check = 2;
	if (nb <= 1)
		return (0);
	while (check <= nb / 2)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_find_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
