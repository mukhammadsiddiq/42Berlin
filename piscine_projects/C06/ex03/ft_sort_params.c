/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:12:21 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/22 02:52:43 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_swap(char **s, char **s1)
{
	char	*tmp;

	tmp = *s;
	*s = *s1;
	*s1 = tmp;
}

int	ft_strcmp(char *str, char *str1)
{
	while (*str == *str1 && *str)
	{
		str++;
		str1++;
	}
	return (*str - *str1);
}

void	ft_sort(char **argv, int argc)
{
	int	i;
	int	j;
	int	len;

	len = argc;
	while (len - 1)
	{
		i = 0;
		j = 1;
		while (j < len)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			i++;
			j++;
		}
		len--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	ft_sort(argv + 1, argc - 1);
	while (*(++argv))
		ft_putstr(*argv);
}
