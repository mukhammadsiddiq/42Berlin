/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:02:17 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/05 19:25:07 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_msg	alpha = {0, 0};

void	convert_bits(int bits)
{
	alpha.c = (bits >> alpha.nobits) & 1;
	alpha.nobits++;
	if (alpha.nobits == 7)
	{
		printf("%c", alpha.c);
		if (!alpha.c)
			printf("\n");
		alpha.c = 0;
		alpha.nobits = 0;
	}
}

int	main(void)
{
	printf("Here is my PID: %d\n", getpid());
	char *s = "01100001";
	int i = 0;
	while (i < 8)
	{
		convert_bits((int)s[i]);
		i++;
	}
	// struct sigaction sa;
	// sa.sa_handler = &convert_bits;
	// while (1)
	// {
	// 	sigaction(SIGUSR2, &sa, NULL);
	// 	sigaction(SIGUSR1, &sa, NULL);
	// 	pause();
	// }
	return (0);

}
