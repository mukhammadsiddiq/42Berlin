/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:44:38 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/23 21:46:49 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE  1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG    "I have an even number of arguments.\n"
# define ODD_MSG     "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

void	ft_putstr(char *str);

typedef int	t_bool;

#endif
