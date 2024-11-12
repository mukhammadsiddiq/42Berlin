/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:10:57 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 14:13:27 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char) c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}

// int main() {
//     // Test cases for ft_memchr

//     // Test 1: Basic comparison in a string
//     const char *str1 = "/|\x12\xff\x09\x42\2002\42|\\";
//     char target = '\200';
//     size_t n = 10; // Size of the string
//     void *ft_result = ft_memchr(str1, target, n);
//     void *mem_result = memchr(str1, target, n);

//     printf("Test 1: Searching for '%c' in \"%s\" with n = %zu\n", target, str1, n);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 2: Target character not found in the string
//     target = 'z';
//     ft_result = ft_memchr(str1, target, n);
//     mem_result = memchr(str1, target, n);

//     printf("Test 2: Searching for '%c' (not in \"%s\")\n", target, str1);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 3: Searching for the first character (from the beginning)
//     target = 'H';
//     ft_result = ft_memchr(str1, target, n);
//     mem_result = memchr(str1, target, n);

//     printf("Test 3: Searching for '%c' at the start of \"%s\"\n", target, str1);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 4: Searching for the last character
//     target = '!';
//     ft_result = ft_memchr(str1, target, n);
//     mem_result = memchr(str1, target, n);

//     printf("Test 4: Searching for '%c' (last character in \"%s\")\n", target, str1);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 5: Searching in a smaller portion of the string (first 5 characters)
//     n = 5;  // Limit the search to the first 5 characters
//     target = 'o';
//     ft_result = ft_memchr(str1, target, n);
//     mem_result = memchr(str1, target, n);

//     printf("Test 5: Searching for '%c' in the first %zu characters of \"%s\"\n", target, n, str1);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 6: Searching for the null character in a string
//     target = '\0';
//     ft_result = ft_memchr(str1, target, n);
//     mem_result = memchr(str1, target, n);

//     printf("Test 6: Searching for null character ('\\0') in \"%s\"\n", str1);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 7: Searching in an empty string
//     const char *empty_str = "";
//     target = 'a';
//     n = 0; // No characters to search
//     ft_result = ft_memchr(empty_str, target, n);
//     mem_result = memchr(empty_str, target, n);

//     printf("Test 7: Searching for '%c' in an empty string\n", target);
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     // Test 8: Searching in a string with all null characters
//     const char *null_str = "\0\0\0\0\0";
//     target = '\0';
//     n = 5; // All characters are null
//     ft_result = ft_memchr(null_str, target, n);
//     mem_result = memchr(null_str, target, n);

//     printf("Test 8: Searching for null character in a string with only null characters\n");
//     printf("ft_memchr result: %s\n", ft_result ? (char *)ft_result : "NULL");
//     printf("memchr result: %s\n", mem_result ? (char *)mem_result : "NULL");
//     printf("Match: %s\n\n", ft_result == mem_result ? "PASS" : "FAIL");

//     return 0;
// }
