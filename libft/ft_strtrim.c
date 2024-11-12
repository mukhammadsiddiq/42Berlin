/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:13:13 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 19:22:28 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_valid(const char *set, char c)
{
	while (*set)
	{
		if (*set == (const char)c)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;

	trimmed = NULL;
	end = ft_strlen(s1) - 1;
	while (!is_valid(set, (char)s1[end]) && end)
		end--;
	start = 0;
	while ((char)s1[start] && !is_valid(set, (char)s1[start]))
		start++;
	len = end - start + 2;
	trimmed = (char *) malloc(sizeof(char) * len);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (len--)
		trimmed[i++] = (char)s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

