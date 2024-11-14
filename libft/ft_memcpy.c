/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:36:52 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/14 23:41:37 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "assert.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t			i;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (dest);
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
