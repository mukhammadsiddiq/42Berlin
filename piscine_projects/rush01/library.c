/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:22:26 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/12 22:35:28 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	ft_putchar('\n');
}

int	*ft_atoi(char *s, int *arr)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			if (i < 16)
			{
				arr[i] = *s - 48;
				i++;
			}
			else
			{
				free(arr);
				return (NULL);
			}
		}
		s++;
	}
	if (i != 16)
		return (NULL);
	return (arr);
}
