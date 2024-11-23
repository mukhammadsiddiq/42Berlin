/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:00:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/22 19:14:09 by mukibrok         ###   ########.fr       */
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
	char	*s;

	ft_printf("-----> Checking for Char <------------\n");
	c = 'A';
	count = ft_printf("Here is a character F: %c\n", c);
	ft_printf("size of the str F: %d\n", count);
	count = 0;
	count = printf("Here is a character O: %c\n", c);
	printf("size of the str O: %i\n", count);
	ft_printf("-----> Checking for Char End <------------\n");
	ft_printf("-----> Checking for Str <------------\n");
	count = 0;
	s = "Mukhammad siddiq";
	count = ft_printf("size of the str F: %s\n", s);
	count = 0;
	count = printf("size of the str O: %s\n", s);
	ft_printf("-----> Checking for Str end<------------\n");
	ft_printf("-----> Checking for Digit <------------\n");
	ft_printf("ft_printf: %i\n", -2147483650);
	ft_printf("ft_printf: %d\n", -2147483650);
	printf("printf: %d\n", -2147483650);
	printf("printf: %i\n", -2147483650);
	ft_printf("-----> Checking for Digit end<------------\n");
	ft_printf("-----> Checking for Hex<------------\n");
	ft_printf("ft_printf: %x\n", 544);
	printf("printf: %x\n", 544);
	ft_printf("-----> Checking for Hex finish<------------\n");

}
