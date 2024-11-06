/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:08:27 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/06 18:47:55 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s);
	if (n > 0)
	{
		s += n;
		while (n--)
		{
			if (*s == (unsigned char) c)
				return ((char *) s);
			--s;
		}
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}
