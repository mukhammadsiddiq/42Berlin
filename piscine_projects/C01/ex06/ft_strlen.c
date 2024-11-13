/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:20:35 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/11 13:08:04 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
/*
int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Hi!";
	printf("%d", ft_strlen(str));
}
*/
int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*(str + size))
		size++;
	return (size);
}
