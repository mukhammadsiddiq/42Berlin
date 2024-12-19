/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push Swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:58:36 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 16:07:05 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_list
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;

	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;
}				t_list_node;

char	**ft_split(char const *s, char c);
size_t	stack_len(t_list_node *stack);
void	free_stack(t_list_node **stack);
void	sa(t_list_node **stack, bool value);
void	ra(t_list_node **stack, bool value);
void	rra(t_list_node **stack, bool value);
void	sa(t_list_node **stack, bool value);
void	sort_three(t_list_node **stack);
void	ra(t_list_node **stack, bool value);
void	rra(t_list_node **stack, bool value);
t_list_node	*find_last(t_list_node *stack);
bool	sorted(t_list_node *stack);

#endif
