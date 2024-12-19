/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:46:01 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 19:50:34 by mukibrok         ###   ########.fr       */
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
			free_stack(stack); //not done
		nbr = atol(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			free_stack(stack); // not done
		if (dup_error(*stack, (int) nbr)) // not done
			free_stack(stack);
		append(&stack, (int) nbr); // completed
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
		last_node = find_last(*stack); // completed
		last_node->next = head;
		head->prev = last_node;
	}
}

void	current_index(t_list_node *stack)
{
	int	i;
	int	median;

	i = 0;
	median = stack_len(stack) / 2;
	while(stack)
	{
		if (i >= median)
		{
			stack->index = i;
			stack->above_median = true;
		}
		else
		{
			stack->index = i;
			stack->above_median = false;
		}
		stack = stack->next;
		i++;
	}
}

void	set_target_a(t_list_node *a, t_list_node *b)
{
	t_list_node	*target;
	t_list_node	*current_b;
	long		target_nbr;

	while (a)
	{
		current_b = b;
		target_nbr = INT_MIN;
		while (current_b)
		{
			if ((a->nbr > current_b->nbr) && (current_b->nbr > target_nbr))
			{
				target_nbr = current_b->nbr;
				target = current_b;
			}
			current_b = current_b->next;
		}
		if (target_nbr == INT_MIN)
			a->target = ft_max(b);
		else
			a->target = target;
		a = a->next;
	}
}
