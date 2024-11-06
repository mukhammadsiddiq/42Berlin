/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:10:57 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/06 19:26:24 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(char *)s && n)
	{
		if (*(char *)s == (unsigned char) c)
			return ((char *)s);
		s++;
		n--;
	}
	return (NULL);
}

int main() {
    const char *strmemchr = "Hello, World!";
    unsigned char *result;
    unsigned char *result1;

    result = memchr(strmemchr, 'o', sizeof(strmemchr));
    result1 = ft_memchr(strmemchr, 'o', sizeof(strmemchr));

	printf("Found 9 at position: %s\n", result);
	printf("Found 9 at position: %s\n", result1);
}
