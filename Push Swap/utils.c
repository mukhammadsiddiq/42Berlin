/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:51:25 by muxammad          #+#    #+#             */
/*   Updated: 2024/12/19 12:37:08 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push Swap.h"

size_t	stack_len(t_list_node *stack)
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

void	free_stack(t_list_node **stack)
{
	t_list_node	*tmp;

	if (!stack || !*stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

t_list_node	*find_last(t_list_node *stack)
{
	if (!stack) return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

bool	sorted(t_list_node *stack)
{
	if (!stack) return (1);
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}

// t_list_node *create_node(int value) {
//     t_list_node *new_node = malloc(sizeof(t_list_node));
//     if (!new_node) {
//         perror("Error allocating memory");
//         exit(EXIT_FAILURE);
//     }
//     new_node->nbr = value;
//     new_node->next = NULL;
//     return new_node;
// }

// // Helper function to print the stack
// void print_stack(t_list_node *stack) {
//     while (stack) {
//         printf("%d -> ", stack->nbr);
//         stack = stack->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     // Create a sample stack
//     t_list_node *stack = create_node(42);
//     stack->next = create_node(24);
//     stack->next->next = create_node(84);
//     stack->next->next->next = create_node(16);

//     // Test stack_len
//     printf("Original stack:\n");
//     print_stack(stack);
//     size_t length = stack_len(stack);
//     printf("Length of stack: %zu\n", length);

//     // Test find_last
//     t_list_node *last = find_last(stack);
//     if (last) {
//         printf("Last node data: %d\n", last->nbr);
//     } else {
//         printf("Stack is empty.\n");
//     }

//     // Test free_stack
//     free_stack(&stack);
//     if (!stack) {
//         printf("Stack has been successfully freed.\n");
//     } else {
//         printf("Error: Stack was not fully freed.\n");
//     }

//     return 0;
// }
