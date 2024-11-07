/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:35:23 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/07 16:02:32 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t amount, size_t size)
{
	unsigned char	*arr;

	arr = NULL;
	if (size == 0 || amount == 0)
	{
		size = 1;
		amount = 1;
	}
	arr = malloc(size * amount);
	if (!arr)
		return (NULL);
	while (*arr)
		*(arr++) = 0;
	return (arr);
}
