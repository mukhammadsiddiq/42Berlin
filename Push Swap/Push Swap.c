/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push Swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:00:39 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 09:55:16 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || argv[1][0] == '\0')
	{
		printf("./push_swap [numbers]");
		return (-1);
	}
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	init_stack(&a, argv);
	if (!sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort(&a, &b);
	}
	free_stack(&a);
}
