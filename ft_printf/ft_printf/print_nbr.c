/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:18:08 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/23 23:41:45 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_nbr(int n, int *counter)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		print_char((int) '-', counter);
	}
	if (ln >= 10)
	{
		print_nbr(ln / 10, counter);
		ln %= 10;
	}
	if (ln < 10)
		print_char((int)ln + 48, counter);
}

void	print_hex(unsigned int ln, int *counter, char x_X)
{
	char	*form_x;

	if (x_X == 'x')
		form_x = "0123456789abcdef";
	else
		form_x = "0123456789ABCDEF";
	if (ln >= 16)
		print_hex(ln / 16, counter, x_X);
	print_char((int) form_x[ln % 16], counter);
}

void	print_uint(unsigned int ln, int *counter)
{
	if (ln >= 10)
		print_uint(ln / 10, counter);
	print_char((int)(ln % 10) + 48, counter);
}

void	print_ptr(void *pt, int *counter)
{
	unsigned long	ptr;

	ptr = (unsigned long) pt;
	print_str("0x", counter);
	print_hex(ptr, counter, 'x');
}

// int main(void)
// {
// 	int counter = 0;
// 	long num = 2312;
// 	print_nbr(num, 16, &counter);
// 	printf("\n%d\n", counter);
// 	printf("hex: %lx\n", num);
// }
