/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:02:17 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/09 15:45:23 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_msg	g_alpha = {0, 0};

void	convert_bits(int bits)
{
	if (bits == SIGUSR1)
		g_alpha.c |= (1 << (7 - g_alpha.nobits));
	else if (bits == SIGUSR2)
		g_alpha.c |= (0 >> (7 - g_alpha.nobits));
	g_alpha.nobits++;
	if (g_alpha.nobits == 8)
	{
		ft_printf("%c", g_alpha.c);
		if (!g_alpha.c)
		{
			ft_printf("\n");
		}
		g_alpha.c = 0;
		g_alpha.nobits = 0;
	}
}

int	main(void)
{
	ft_printf("Feel free to use free version:)\n");
	ft_printf("Here is my PID: %d\n", getpid());
	signal(SIGUSR1, convert_bits);
	signal(SIGUSR2, convert_bits);
	while (1)
		pause();
	return (0);
}
