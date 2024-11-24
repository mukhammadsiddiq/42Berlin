/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:22:11 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/24 00:18:09 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_param(char specifier, va_list *ptr, int *count)
{
	if (specifier == 'c')
		print_char(va_arg(*ptr, int), count);
	else if (specifier == 's')
		print_str(va_arg(*ptr, char *), count);
	else if (specifier == 'd' || specifier == 'i')
		print_nbr(va_arg(*ptr, int), count);
	else if (specifier == 'p')
		print_ptr(va_arg(*ptr, void *), count);
	else if (specifier == 'u')
		print_uint(va_arg(*ptr, unsigned int), count);
	else if (specifier == 'x')
		print_hex(va_arg(*ptr, unsigned int), count, 'x');
	else if (specifier == 'X')
		print_hex(va_arg(*ptr, unsigned int), count, 'X');
	else
		print_char(specifier, count);
}
