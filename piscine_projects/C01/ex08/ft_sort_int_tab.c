/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:10:29 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/12 15:06:01 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

/*int	main(void)
{
	int	v[10] = {1, 5, 2, 9, 8, 4, 6, 3, 3, 6};
	int	size = 10;
	int	 i = 0;

	ft_sort_int_tab(v, size);
	
	while (i < 10)
	{
		printf("%d", v[i]);
		i++;
	}
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
