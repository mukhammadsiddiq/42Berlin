/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:19:07 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/23 14:38:36 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

/*typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;*/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, int size)
{
	char	*dst;
	int		i;

	i = 0;
	dst = NULL;
	dst = (char *) malloc(sizeof(char) * size + 1);
	if (dst == NULL)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tmp;

	i = 0;
	tmp = (t_stock_str *) malloc(sizeof(t_stock_str) * ac + 1);
	if (tmp == NULL)
		return (NULL);
	while (i < ac)
	{
		tmp[i].size = ft_strlen(av[i]);
		tmp[i].str = av[i];
		tmp[i].copy = ft_strcpy(av[i], tmp[i].size);
		i++;
	}
	tmp[i].size = 0;
	tmp[i].str = 0;
	tmp[i].copy = 0;
	return (tmp);
}

/*int	main(int argc, char **argv)
{
	t_stock_str	*new;

	new = ft_strs_to_tab(argc, argv);
	for (int i = 0; i < argc; i++)
		printf("size: %d\nstr: %s\ncopy: %s\n", new[i].size, new[i].str, new[i].copy);
}*/
