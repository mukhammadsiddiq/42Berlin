/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:31:18 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/20 17:43:48 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	double_char(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (*(str + i))
	{
		j = i + 1;
		while (*(str + j))
		{
			if (*(str + i) == *(str + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_base(char *base)
{
	int	s_value;

	s_value = 0;
	while (base[s_value] != '\0')
	{
		if (base[s_value] == '+' && base[s_value] == '-')
			return (1);
		s_value++;
	}
	if (!base || base[0] == '\0' || base[1] == '\0')
		return (1);
	if (double_char(base))
		return (1);
	return (s_value);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		s_value;
	long	n;

	s_value = check_base(base);
	n = nbr;
	if (s_value == 1)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= s_value)
		ft_putnbr_base(n / s_value, base);
	ft_putchar(base[n % s_value]);
}

/*int	main(int argc, char **argv)
{
	int		nbr;
	char	*value;

	if (argc > 1)
	{
		nbr = atoi(argv[1]);
		value = argv[2];
	}
	ft_putnbr_base(nbr, value);
}*/
