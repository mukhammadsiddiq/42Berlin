/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:00:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/24 00:19:33 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		counter;

	counter = 0;
	va_start(ptr, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			print_param(*(++str), &ptr, &counter);
		}
		else
			print_char((int)*str, &counter);
		++str;
	}
	va_end(ptr);
	return (counter);
}

// int	main(void)
// {
// 	int		count;
// 	char	c;
// 	char	*s;

// 	ft_printf("-----> Checking for Char <------------\n");
// 	c = '1';
// 	count = ft_printf("Here is a character F: %c\n", c);
// 	ft_printf("size of the str F: %d\n", count);
// 	count = 0;
// 	count = printf("Here is a character O: %c\n", c);
// 	printf("size of the str O: %i\n", count);
// 	ft_printf("-----> Checking for Char End <------------\n");
// 	ft_printf("-----> Checking for Str <------------\n");
// 	count = 0;
// 	s = "Mukhammad siddiq";
// 	count = ft_printf("size of the str F: %s\n", s);
// 	count = 0;
// 	count = printf("size of the str O: %s\n", s);
// 	ft_printf("-----> Checking for Str end<------------\n");
// 	ft_printf("-----> Checking for Digit <------------\n");
// 	ft_printf("ft_printf: %i\n", -2147483650);
// 	ft_printf("ft_printf: %d\n", -2147483650);
// 	printf("printf: %d\n", -2147483647);
// 	printf("printf: %i\n", -2147483647);
// 	ft_printf("-----> Checking for Digit end<------------\n");
// 	ft_printf("-----> Checking for Hex<------------\n");
// 	ft_printf("ft_printf: %x\n", 544);
// 	printf("printf: %x\n", 544);
// 	ft_printf("-----> Checking for Hex finish<------------\n");
// 	ft_printf("-----> Checking for Hex<------------\n");
// 	ft_printf("ft_printf: %X\n", -1);
// 	printf("printf: %X\n", -1);
// 	ft_printf("-----> Checking for Hex finish<------------\n");
// 	ft_printf("-----> Checking for Unsigned <------------\n");
// 	ft_printf("ft_printf: %u\n", 5434);
// 	ft_printf("ft_printf: %u\n", -5434);
// 	printf("printf: %u\n", 5434);
// 	printf("printf: %u\n", -5434);
// 	ft_printf("-----> Checking for unsigned end<------------\n");
// 	ft_printf("-----> Checking for str<------------\n");
// 	ft_printf("ft_printf: cspdiuxX%\n");
// 	// printf("ft_printf: cspdiuxX%");
// 	ft_printf("-----> Checking for str<------------\n");
// 	// ft_printf("printf: %p %p\n", LONG_MIN, LONG_MAX);
// 	// printf("printf: %p %p\n", LONG_MIN, LONG_MAX);
// 	// ft_printf("ft_printf: %s", NULL);
// 	// printf("printf: %s\n", NULL);
// // }
// int	main(void)
// {
// 	ft_printf("ft_printf: %c %c %c\n", 'a', '\t', 'b');
// 	printf("printf: %c %c %c\n", 'a', '\t', 'b');
// 	ft_printf("-----> Checking for str<------------\n");
// 	ft_printf("ft?printf: %s %s\n", "", "-");
// 	printf("printf: %s %s\n", "", "-");
// 	ft_printf("ft_printf:%x %d\n", -1, -2147483647);
// 	printf("printf:%x %d\n", -1, -2147483647);
// }
