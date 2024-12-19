/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push Swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:58:36 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/19 09:58:33 by muxammad         ###   ########.fr       */
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

char	**ft_split(char const *s, char c);
size_t	stack_len(t_list *stack);
void	free_stack(t_list *stack);

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
}				t_list;

#endif
