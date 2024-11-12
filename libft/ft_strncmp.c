/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:51:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 14:01:47 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}

// int main() {
//     // Test cases for ft_strncmp

//     // Test 1: Same strings, equal comparison
//     const char *str1 = "\200";
//     const char *str2 = "\0";
//     size_t n = 6;
//     int ft_result = ft_strncmp(str1, str2, n);
//     int str_result = strncmp(str1, str2, n);

//     printf("Test 1: Comparing \"%s\" and \"%s\" with n = %zu\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 2: Different strings (case-sensitive)
//     str1 = "Hello";
//     str2 = "hello";
//     n = 5;
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 2: Comparing \"%s\" and \"%s\" with n = %zu\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 3: n is smaller than string length
//     str1 = "Hello, World!";
//     str2 = "Hello, Universe!";
//     n = 5;
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 3: Comparing \"%s\" and \"%s\" with n = %zu\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 4: n is larger than string length (str1 is shorter)
//     str1 = "Hi";
//     str2 = "Hello";
//     n = 10;
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 4: Comparing \"%s\" and \"%s\" with n = %zu\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 5: Comparing strings with different lengths (str1 is longer)
//     str1 = "Hello, World!";
//     str2 = "Hello";
//     n = 20;
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 5: Comparing \"%s\" and \"%s\" with n = %zu\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 6: Compare with zero length (n = 0)
//     str1 = "Hello";
//     str2 = "Hello, World!";
//     n = 0;
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 6: Comparing \"%s\" and \"%s\" with n = %zu\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 7: Comparing empty strings
//     str1 = "";
//     str2 = "";
//     n = 5;
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 7: Comparing empty strings with n = %zu\n", n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 8: Comparing strings with null character in the middle
//     str1 = "Hello\0World";
//     str2 = "Hello\0Universe";
//     n = 10;  // Only compare up to the null terminator
//     ft_result = ft_strncmp(str1, str2, n);
//     str_result = strncmp(str1, str2, n);

//     printf("Test 8: Comparing \"%s\" and \"%s\" with n = %zu (null in the middle)\n", str1, str2, n);
//     printf("ft_strncmp result: %d\n", ft_result);
//     printf("strncmp result: %d\n", str_result);
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     return 0;
// }
