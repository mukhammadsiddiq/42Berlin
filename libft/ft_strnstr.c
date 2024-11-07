/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:57:16 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/07 13:36:04 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	const char	*s;
	const char	*f;

	if (*find == '\0')
		return ((char *)str);
	while (*str && len--)
	{
		s = str;
		f = find;
		while (*s == *f)
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return ((char *)str);
		str++;
	}
	return (NULL);
}
