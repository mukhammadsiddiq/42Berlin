/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:02:17 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/06 19:01:17 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_msg	alpha = {0, 0};

void	convert_bits(int bits)
{
	if (bits == SIGUSR1)
		alpha.c |= (1 << (7 - alpha.nobits));
	else if (bits == SIGUSR2)
		alpha.c |= (0 << (7 - alpha.nobits));
	alpha.nobits++;
	if (alpha.nobits == 8)
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
	signal(SIGUSR1, convert_bits);
	signal(SIGUSR2, convert_bits);
	while (1)
		pause();
	return (0);
}
