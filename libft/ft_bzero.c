/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:20:47 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/06 14:17:17 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char arr[10] = "mukhammad";
// 	int	arrr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// 	ft_bzero(arr, sizeof(arr));
// 	ft_bzero(arrr, sizeof(arrr));
// 	printf("arr = %s\n", arr);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d->", arrr[i]);
// 	}

// }
