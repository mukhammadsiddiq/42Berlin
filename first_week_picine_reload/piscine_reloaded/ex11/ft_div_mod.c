/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:03:59 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/04 19:15:28 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int     main(void)
// {
//     int a = 21;
//     int b = 5;
//     int div;
//     int mod;
//     ft_div_mod(a, b, &div, &mod);
//     printf("div: %d\nmod: %d\n", div, mod);
// }
