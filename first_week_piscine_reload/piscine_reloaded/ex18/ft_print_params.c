/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:53:35 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/05 15:20:58 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_str(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			ft_str(argv[i]);
			i++;
		}
	}
	return (0);
}
