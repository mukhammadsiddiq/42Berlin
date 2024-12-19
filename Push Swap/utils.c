/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:51:25 by muxammad          #+#    #+#             */
/*   Updated: 2024/12/19 09:57:15 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

size_t	stack_len(t_list *stack)
{
	size_t	length;

	length = 0;
	while (stack)
	{
		length++;
		stack = stack->next;
	}
	return (length);
}

void	free_stack(t_list *stack)
{
	t_list	*tmp;

	if (!stack)
		return ;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}