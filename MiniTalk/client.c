/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:03:15 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/06 19:25:49 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf/ft_printf.h"
#include "minitalk.h"

int	pid;

void	send_bit(unsigned char bytes)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((bytes >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}
}

int	main(int argc, char **argv)
{
	unsigned char	*msg;

	if (argc != 3)
	{
		printf("Provide me with correct info :(\n");
		return (1);
	}
	pid = atoi(argv[1]);
	if (pid < 0)
		return (printf("PID can not be negative!\n"), 1);
	msg = (unsigned char *) argv[2];
	while (*msg)
		send_bit(*(msg++));
	send_bit('\0');
	return (0);
}
