/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:22:11 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/21 19:06:37 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_param(char specifier, va_list ptr)
{
	int count;

	count = 0;
	if (specifier == 'c')
		ft_putchar(va_arg(ptr, int));
	return (count);
}
