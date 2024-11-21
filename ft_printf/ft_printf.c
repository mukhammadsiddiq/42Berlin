/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:00:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/21 19:11:29 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		counter;

	counter = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
			counter += print_param(*(++str), ptr);
		else
		{
			write(1, str, 1);
			counter++;
		}
		str++;
	}
	va_end(ptr);
	return (counter);
}
int	main(void)
{
	int	count;
	char	c;

	c = 'A';
	count = ft_printf("Here is a character: %c\n", c);
	printf("size of the str: %d\n", count);
	count = 0;
	count = printf("Here is a character: %c\n", c);
	printf("size of the str: %d\n", count);
}
