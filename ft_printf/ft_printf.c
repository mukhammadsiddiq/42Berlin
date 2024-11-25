/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhammadqodirmaxmudov <muhammadqodirmax    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:00:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/26 00:46:49 by muhammadqod      ###   ########.fr       */
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
		print_ptr(va_arg(*ptr, size_t), count);
	else if (specifier == 'u')
		print_uint(va_arg(*ptr, unsigned int), count);
	else if (specifier == 'x')
		print_hex(va_arg(*ptr, unsigned int), count, 'x');
	else if (specifier == 'X')
		print_hex(va_arg(*ptr, unsigned int), count, 'X');
	else if (specifier == '%')
		print_char('%', count);
	else
		print_char(specifier, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		counter;

	counter = 0;
	va_start(ptr, str);
	if (!str)
		return (-1);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			print_param(*(++str), &ptr, &counter);
		}
		else
			print_char(*str, &counter);
		++str;
	}
	va_end(ptr);
	return (counter);
}
