/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:18:08 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/22 19:14:06 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_nbr(long ln, int base, int *counter)
{
	char	*form;

	form = "0123456789abcdef";
	if (ln < 0)
	{
		ln = -ln;
		ft_putchar('-');
		(*counter)++;
	}
	if (ln >= base)
		print_nbr(ln / base, base, counter);
	ft_putchar(form[ln % base]);
	(*counter)++;
}

// int main(void)
// {
// 	int counter = 0;
// 	long num = 2312;
// 	print_nbr(num, 16, &counter);
// 	printf("\n%d\n", counter);
// 	printf("hex: %lx\n", num);
// }
