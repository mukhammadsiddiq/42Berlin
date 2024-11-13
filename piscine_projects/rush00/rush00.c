/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kstrohba <kstrohba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:00:31 by kstrohba          #+#    #+#             */
/*   Updated: 2024/03/09 19:59:16 by kstrohba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_slash(int a)
{
	if (a == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\\');
		ft_putchar('\n');
	}
}

void	first_line(int a)
{
	int	i;

	i = 0;
	if (a == 1)
	{
		last_slash(1);
	}
	while (i <= (a - 1) && a != 1)
	{
		if (i == 0)
		{
			ft_putchar('/');
			i++;
		}
		if (i < (a - 1))
		{
			ft_putchar('*');
			i++;
		}
		if (i == (a - 1))
		{
			last_slash(2);
			i++;
		}
	}
}

void	last_row(int a)
{
	int	i;

	i = 0;
	if (a == 1 && i == 0)
	{
		last_slash(2);
	}
	while (i <= (a - 1) && a != 1)
	{
		if (i == 0)
		{
			ft_putchar('\\');
			i++;
		}
		if (i < (a - 1))
		{
			ft_putchar('*');
			i++;
		}
		if (i == (a - 1))
		{
			last_slash(1);
			i++;
		}
	}
}

void	middle_rows(int a, int b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (b - 1))
	{
		if (i == 0 && a != 1)
		{
			ft_putchar('*');
			i++;
		}
		while (i < (a - 1))
		{
			ft_putchar(' ');
			i++;
		}
		if (i == (a - 1) || i == 0)
		{
			ft_putchar('*');
			ft_putchar('\n');
			j++;
			i = 0;
		}
	}
}

void	display_chars(int a, int b)
{
	first_line(a);
	middle_rows(a, (b - 1));
	last_row(a);
}

int	main(void)
{
	display_chars(5, 1);
	return (0);
}
