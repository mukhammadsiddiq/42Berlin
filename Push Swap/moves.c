/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:23:12 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 16:24:18 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

void	sa(t_list_node **stack, bool value)
{
	t_list_node	*tmp;

	if (!stack || !*stack) return ;
	tmp = (*stack)->next;
	(*stack)->next = *stack;
	*stack = tmp;
	printf("ra\n");
}

void	ra(t_list_node **stack, bool value)
{
	t_list_node	*head;
	t_list_node *tail;

	if (!stack || !*stack || !(*stack)->next) return ;
	head = *stack;
	tail = *stack;
	while (tail->next)
		tail = tail->next;
	*stack = head->next;
	(*stack)->prev = NULL;
	head->next = NULL;
	tail->next = head;
	head->prev = tail;
	printf("ra\n");
}

void	rra(t_list_node **stack, bool value)
{
	t_list_node	*head;
	t_list_node	*tail;
	t_list_node	*tmp;

	if (!*stack || !stack) return ;
	head = *stack;
	while (tail->next)
	{
		tmp = tail;
		tail = tail->next;
	}
	tail->next = head;
	tail->prev = NULL;
	tmp->next = NULL;
	printf("rra\n");

}

