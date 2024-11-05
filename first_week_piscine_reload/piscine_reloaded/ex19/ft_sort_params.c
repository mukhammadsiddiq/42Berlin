/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:59:39 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/05 15:27:20 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_printf(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		flag;
	int		i;
	char	*tmp;

	if (argc > 1)
	{
		flag = 0;
		while (!flag)
		{
			flag = 1;
			i = 1;
			while (i < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = tmp;
					flag = 0;
				}
				i++;
			}
		}
	}
	ft_printf(argv);
}
