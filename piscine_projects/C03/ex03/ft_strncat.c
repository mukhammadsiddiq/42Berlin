/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:40:16 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/17 01:25:35 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	if (nb < 1)
		return (dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*int   main(void)
{
        char    dest[30] = {'q', 'q', 'w', 'w', 'r', 'f', 'c'};
        char    src[] = "dlkhskjdhcsjk";

        ft_strncat(dest, src, 5);
        printf("dest: %s\n src: %s\n", dest, src);
}*/
