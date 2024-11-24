/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:00:42 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/24 00:18:33 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	print_char(int c, int *counter);
void	print_str(char *str, int *counter);
void	print_nbr(int n, int *counter);
void	print_hex(unsigned int ln, int *counter, char x_X);
void	print_uint(unsigned int ln, int *counter);
void	print_ptr(void *pt, int *counter);
int		ft_printf(const char *str, ...);
void	print_param(char specifier, va_list *ptr, int *counter);

#endif
