/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:17:42 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/23 11:55:53 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb);

/*int	main(void)
{
	int	nb;
	int	result;
	
	nb = 81;
	result = ft_sqrt(nb);
	printf("%d", result);
}*/

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	i;

	i = 0;
	sqrt = 0;
	while (sqrt <= nb)
	{
		sqrt = i * i;
		if (sqrt == nb)
			return (i);
		else if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}
