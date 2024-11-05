/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:36:04 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/05 15:16:25 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
