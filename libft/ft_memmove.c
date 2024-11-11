/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:40:16 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/11 22:02:39 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if ((d < s) || (d > s + n))
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

// int	main(void)
// {
// 	char *src = "mukhammad";
// 	char dst[12];
// 	ft_memmove(dst, src, 0);
// 	printf("memcpy: %s", dst);
// }
