/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:40:16 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 20:33:40 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if ((d < s) || (d > s + n))
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[0xF0];

// 	printf("memmove: %p", memmove(((void *) 0), src, 12));
// }
