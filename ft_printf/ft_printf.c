/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:00:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/21 17:04:11 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(const char *str, ...)
{
	va_list	ptr;
	int	counter;

	counter = 0;
	va_start(ptr, str);
}
