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
	{
		write(1, "(null)", 6);
		*counter += 6;
		return ;
	}
	while (*str != '\0')
	{
		print_char((int) *str, counter);
		str++;
	}
}

int	length(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	int counter -= 
// 	print_char('0', &counter);
// }
