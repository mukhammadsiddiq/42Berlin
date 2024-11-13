/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:26:40 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/15 16:24:50 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);

/*int	main(void)
{
	char	str[] = "saluD, , , , dfesd";
	printf("%s", ft_strcapitalize(str));
	return 0;
}*/

char	*ft_strcapitalize(char *str)
{
	int		new_word;
	int		i;
	char	c;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
