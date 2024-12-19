/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:46:01 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 12:27:27 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

void	init_stack(t_list_node **stack, char **argv)
{
	int		i;
	long	nbr;

	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_stack(stack);
		nbr = atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_stack(stack);
		if (dup_error(*stack, (int) nbr))
			free_stack(stack);
		append(&stack, (int) nbr);
		i++;
	}
}

void	append(t_list_node **stack, int nbr)
{
	t_list_node	*head;
	t_list_node	*last_node;

	if (!*stack || !stack)
		return ;
	head = (t_list_node *) malloc(sizeof(t_list_node));
	if (!head) return ;
	head->next = NULL;
	head->nbr = nbr;
	if (!*stack)
	{
		*stack = head;
		head->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = head;
		head->prev = last_node;
	}
}
