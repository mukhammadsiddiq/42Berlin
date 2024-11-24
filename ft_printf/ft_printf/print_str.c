/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:19:20 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/24 00:12:16 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(int c, int *counter)
{
	(*counter)++;
	write(1, &c, 1);
}

void	print_str(char *str, int *counter)
{
	if (!str)
		return ;
	while (*str)
	{
		print_char((int) *str, counter);
		str++;
	}
}
