/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:05:55 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/13 21:13:54 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*new;
	unsigned char	*c;

	c = content;
	new = NULL;
	new = (t_list *)malloc(sizeof(t_list) * ft_strlen(c));
	while ()
}
