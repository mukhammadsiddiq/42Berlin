/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:02:28 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/21 00:01:42 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb);

/*int	main(void)
{
	for (int i = 0; i < 10; i++)
		printf("%d --->%d\n", i, ft_recursive_factorial(i));
}*/

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
		result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}
