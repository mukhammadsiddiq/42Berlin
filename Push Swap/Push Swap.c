/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push Swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:00:39 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/17 17:10:28 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

int	main(int argc, char **argv)
{

	if (argc < 2 || argv[1][0] == '\0')
	{
		printf("./push_swap [numbers]");
		return (-1);
	}
	if (argc == 2)
		argv = ft_split(argv[1], ' ');

}
