/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:57:01 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/08 16:44:34 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_string = NULL;
	new_string = (char *) malloc(sizeof(char) * size);
	if (!new_string)
		return (NULL);
	else
	{
		ft_strlcat(new_string, s1, size);
		ft_strlcat(new_string, s2, size);
	}
	return (new_string);
}
