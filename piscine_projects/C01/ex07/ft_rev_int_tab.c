/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:13:47 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/11 16:12:03 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);
/*
int	main(void)
{
	int	tab[] = {};
	int	size = sizeof(tab)/sizeof(tab[0]);

	ft_rev_int_tab(tab, size);

	for(int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
