/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:22:11 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/22 21:27:47 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_param(char specifier, va_list ptr)
{
	int count;

	count = 0;
	if (specifier == 'c')
		print_char(va_arg(ptr, int), &count);
	else if (specifier == 's')
		print_str(va_arg(ptr, char *), &count);
	else if (specifier == 'd' || specifier == 'i')
		print_nbr((long) va_arg(ptr, int), 10, &count);
	// else if (specifier == 'p')
	// 	print_str((long) va_arg(ptr, char *), &count);
	// else if (specifier == 'u')
	// 	print_str(va_arg(ptr, char *), &count);
	else if (specifier == 'x')
		print_nbr((long) va_arg(ptr, unsigned int), 16, &count);
	// else if (specifier == 'X')
	// 	print_str(va_arg(ptr, char *), &count);
	return (count);
}
