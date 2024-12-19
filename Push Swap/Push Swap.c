/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push Swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:00:39 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 20:06:53 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

void	sort(t_list_node **a, t_list_node **b)
{
	int	length;

	length = stack_len(*a); // completed
	if (length-- > 3 && !sorted(*a)) // completed
		push(b, a, "pb\n"); // completed
	if (length-- > 3 && !sorted(*a))
		push(b, a, "pb\n"); // completed
	while (length-- > 3 && !sorted(*a)) // completed
	{
		init_nodes_a(*a, *b);
		MoveAtoB(a, b);
	}
	sort_three(a); // completed
	while (*b)
	{
		init_nodes_b(*a, *b);
		MoveAtoB(a, b);
	}
	current_index(*a); // completed
	min_on_top(a);
}

int	main(int argc, char **argv)
{
	t_list_node	*a;
	t_list_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || argv[1][0] == '\0')
	{
		printf("./push_swap [numbers]"); // completed
		return (-1);
	}
	if (argc == 2)
		argv = ft_split(argv[1], ' '); // completed
	init_stack(&a, argv); // progress
	if (!sorted(a)) // sorted completed
	{
		if (stack_len(a) == 2) // stack_len completed
			sa(&a, false); // sa completed
		else if (stack_len(a) == 3) //completed
			sort_three(&a); // completed
		else
			sort(&a, &b); // progress
	}
	free_stack(&a); // completed;
}
