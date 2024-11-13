/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:51:43 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/21 23:47:57 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	if (argc)
	{
		name = argv[0];
		while (*name != '\0')
		{
			write(1, name, 1);
			name++;
		}
	}
	write(1, "\n", 1);
}
