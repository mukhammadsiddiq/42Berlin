/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhammadqodirmaxmudov <muhammadqodirmax    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:18:08 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/26 00:52:02 by muhammadqod      ###   ########.fr       */
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
		print_char('-', counter);
	}
	if (ln >= 10)
	{
		print_nbr(ln / 10, counter);
		ln %= 10;
	}
	if (ln < 10)
		print_char(ln + 48, counter);
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
	print_char(form_x[ln % 16], counter);
}

void	print_uint(unsigned int ln, int *counter)
{
	if (ln >= 10)
		print_uint(ln / 10, counter);
	print_char((ln % 10) + 48, counter);
}

void	print_ptr(size_t pt, int *counter)
{
	size_t			ptr;
	char			c[25];
	char			*base;
	int				i;

	i = 0;
	base = "0123456789abcdef";
	ptr = (size_t) pt;
	print_str("0x", counter);
	if (ptr == 0)
		print_char('0', counter);
	while (ptr != 0)
	{
		c[i] = base[ptr % 16];
		ptr /= 16;
		i++;
	}
	while (i--)
		print_char(c[i], counter);
}
