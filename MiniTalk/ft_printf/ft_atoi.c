/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:22:14 by mukibrok          #+#    #+#             */
/*   Updated: 2024/12/07 11:56:03 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isspace(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_isdigit(int i)
{
	return (i >= '0' && i <= '9');
}

int	ft_atoi(const char *s)
{
	int	number;
	int	flag;

	number = 0;
	flag = 0;
	while (ft_isspace(*s))
		s++;
	while (*s == '-' || *s == '+')
	{
		if (*s == '-' && flag == 0)
			flag--;
		else if (*s == '+' && flag == 0)
			flag++;
		else
			return (0);
		s++;
	}
	while (ft_isdigit(*s))
	{
		number = number * 10 + (*s - 48);
		s++;
	}
	if (flag < 0)
		return (-number);
	return (number);
}
