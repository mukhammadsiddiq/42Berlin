/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:38:41 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/13 21:15:37 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n, int *negative, int *number)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		*negative = 1;
		n = -n;
	}
	*number = n;
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		tmp;
	int		size;
	char	*number;

	negative = 0;
	number = NULL;
	size = ft_length(n, &negative, &tmp);
	number = (char *)malloc(sizeof(char) * size + 1);
	if (!number)
		return (NULL);
	number[size] = '\0';
	while (tmp > 0)
	{
		number[--size] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (negative)
		number[0] = '-';
	return (number);
}

// int	main(int argc, char **argv)
// {
// 	char	*arr = ft_itoa(atoi(argv[1]));
// 	printf("arr: %s\n", arr);
// 	int i = ft_strlen(arr);
// 	printf("\n%d", arr[i]);
// }
