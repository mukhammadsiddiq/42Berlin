/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:33:05 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/12 15:01:17 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
/*#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 20;
	b = 3;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d,%d", div, mod);
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
