/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:51:25 by muxammad          #+#    #+#             */
/*   Updated: 2024/12/19 20:06:50 by mukibrok         ###   ########.fr       */
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

struct t_list_node	*ft_max(t_list_node *b)
{
	t_list_node		*max;

	max = b;
	while (b)
	{
		if (b->nbr > max->nbr)
			max->nbr = b->nbr;
		b = b->next;
	}
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


// int main()
// {
//     // Create a stack with 5 nodes
//     t_list_node *stack = create_node(10);
//     stack->next = create_node(20);
//     stack->next->prev = stack;
//     stack->next->next = create_node(30);
//     stack->next->next->prev = stack->next;
//     stack->next->next->next = create_node(40);
//     stack->next->next->next->prev = stack->next->next;
//     stack->next->next->next->next = create_node(50);
//     stack->next->next->next->next->prev = stack->next->next->next;

//     printf("Before applying current_index:\n");
//     print_stack(stack);

//     // Apply current_index function
//     current_index(stack);

//     printf("\nAfter applying current_index:\n");
//     t_list_node *tmp = stack;
//     while (tmp)
//     {
//         printf("Value: %d, Index: %d, Above Median: %s\n",
//                tmp->nbr,
//                tmp->index,
//                tmp->above_median ? "true" : "false");
//         tmp = tmp->next;
//     }

//     // Free the stack
//     t_list_node *del;
//     while (stack)
//     {
//         del = stack;
//         stack = stack->next;
//         free(del);
//     }

//     return 0;
// }



// // int main() {
// //     // Create a sample stack
// //     t_list_node *stack = create_node(42);
// //     stack->next = create_node(24);
// //     stack->next->next = create_node(84);
// //     stack->next->next->next = create_node(16);

// //     // Test stack_len
// //     printf("Original stack:\n");
// //     print_stack(stack);
// //     size_t length = stack_len(stack);
// //     printf("Length of stack: %zu\n", length);

// //     // Test find_last
// //     t_list_node *last = find_last(stack);
// //     if (last) {
// //         printf("Last node data: %d\n", last->nbr);
// //     } else {
// //         printf("Stack is empty.\n");
// //     }

// //     // Test free_stack
// //     free_stack(&stack);
// //     if (!stack) {
// //         printf("Stack has been successfully freed.\n");
// //     } else {
// //         printf("Error: Stack was not fully freed.\n");
// //     }

// //     return 0;
// // }
