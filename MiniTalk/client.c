/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:03:15 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/07 12:43:53 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(unsigned char bytes, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((bytes >> i) & 1)
		{
			if ((kill(pid, SIGUSR1) == -1))
			{
				ft_printf("Invalid PID number!\n");
				exit(1);
			}
		}
		else
		{
			if ((kill(pid, SIGUSR2) == -1))
			{
				ft_printf("Invalid PID number!\n");
				exit(1);
			}
		}
		usleep(100);
		i--;
	}
}

int	main(int argc, char **argv)
{
	unsigned char	*msg;
	int				pid;

	if (argc != 3)
	{
		ft_printf("Provide me with correct info :(\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid < 0)
		return (ft_printf("PID can not be negative!\n"), 1);
	msg = (unsigned char *) argv[2];
	while (*msg)
		send_bit(*(msg++), pid);
	send_bit('\0', pid);
	return (0);
}
