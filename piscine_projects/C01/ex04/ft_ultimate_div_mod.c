/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:26:51 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/12 15:02:05 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b);

/*int	main(void)
{
	int	a;
	int	b;
	int	*ap;
	int	*bp;

	a = 30;
	b = 4;
	ap = &a;
	bp = &b;
	ft_ultimate_div_mod(ap, bp);
	printf("%d, %d", a, b);
}
*/
void	ft_ultimate_div_mod(int *a, int*b)
{
	int	result;
	int	div;

	result = *a / *b;
	div = *a % *b;
	*a = result;
	*b = div;
}
