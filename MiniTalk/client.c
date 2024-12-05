/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:03:15 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/05 19:19:03 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include "minitalk.h"

int	pid;

void	send_bytes(unsigned char bytes)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((bytes >> i) & 1)
		{
			printf("1");
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
			printf("0");
		}
		usleep(100);
		i--;
	}
	printf("\n");
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
	msg = argv[2];
	while (*msg)
		send_bytes(*(msg++));
	send_bytes('\0');
	return (0);
}
