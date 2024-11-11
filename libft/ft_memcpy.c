/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:36:52 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/11 22:00:02 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t			i;

	dst = dest;
	s = src;
	i = 0;
	if (dest == NULL || src == NULL || n == 0)
		return (NULL);
	while (n--)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char *src = "NUL";
// 	char *dst = NULL;
// 	ft_memcpy(dst, src, 10);
// 	printf("memcpy: %s", dst);
// }
