/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:18:39 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/07 11:59:09 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H

# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include "ft_printf/ft_printf.h"

typedef struct s_msg
{
	unsigned char	c;
	int	nobits;
}	t_msg;

#endif
