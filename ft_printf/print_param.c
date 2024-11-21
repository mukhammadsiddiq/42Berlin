/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:22:11 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/21 21:46:47 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

void	print_str(char *str, int *counter)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
		*counter++;
	}
}

int	print_param(char specifier, va_list ptr)
{
	int count;

	count = 0;
	if (specifier == 'c')
		print_char(va_arg(ptr, int));
	else if (specifier == 's')
		print_str(va_arg(ptr, char *), &count);
	return (count);
}
