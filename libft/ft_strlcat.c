/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:18:18 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/11 22:13:37 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (src_len + dst_len >= size)
		return (src_len + dst_len);
	i = 0;
	while (i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// void test_strlcat(void)
// {
//     char dest1[9] = "Hello ";
//     char src1[] = "world!";
//     size_t size = 20;

//     // Real strlcat
//     printf("Testing strlcat:\n");
//     size_t real_len = strlcat(dest1, src1, size);
//     printf("Real strlcat: %s (Length: %zu)\n", dest1, real_len);

//     // Reset destination string and test ft_strlcat
//     char dest2[20] = "Hello ";
//     printf("Testing ft_strlcat:\n");
//     size_t ft_len = ft_strlcat(dest2, src1, size);
//     printf("ft_strlcat: %s (Length: %zu)\n", dest2, ft_len);

// }

// int main(void)
// {
//     test_strlcat();
//     return 0;
// }
