/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:57:16 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 19:26:11 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int c)
{
	return ((c == 32) || (c >= 9 && c <= 13));
}

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned char	*s;
	unsigned char	*f;

	if (*find == '\0')
		return ((char *)str);
	while (*str && len--)
	{
		s = (unsigned char *) str;
		f = (unsigned char *) find;
		while (*s == *f)
		{
			s++;
			f++;
		}
		if (*f == '\0' && is_space(*s))
			return ((char *)str);
		str++;
	}
	return (NULL);
}

// int main() {
//     // Test 1: Basic string search
//     const char *haystack = "MZIRIBMZIRIBMZE123";
//     const char *needle = "MZIRIBMZE";
//     size_t n = 13;  // Full length of haystack
//     char *ft_result = ft_strnstr(haystack, needle, n);
//     char *str_result = strnstr(haystack, haystack, n);

//     printf("Test 1: Searching for \"%s\" in \"%s\" with n = %zu\n", needle, haystack, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 2: Search for a substring not present in haystack
//     needle = "Python";
//     ft_result = ft_strnstr(haystack, needle, n);
//     str_result = strnstr(haystack, needle, n);

//     printf("Test 2: Searching for \"%s\" in \"%s\" with n = %zu (not present)\n", needle, haystack, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 3: Needle is an empty string
//     needle = "";
//     ft_result = ft_strnstr(haystack, needle, n);
//     str_result = strnstr(haystack, needle, n);

//     printf("Test 3: Searching for an empty string in \"%s\" with n = %zu\n", haystack, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 4: Needle longer than haystack
//     needle = "Hello, World!";
//     haystack = "Hello";
//     n = 5;
//     ft_result = ft_strnstr(haystack, needle, n);
//     str_result = strnstr(haystack, needle, n);

//     printf("Test 4: Searching for \"%s\" in \"%s\" with n = %zu (needle is longer)\n", needle, haystack, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 5: Searching with a small n (only part of haystack)
//     needle = "World";
//     haystack = "Hello, World!";
//     n = 5;  // Limit the search to the first 5 characters of haystack
//     ft_result = ft_strnstr(haystack, needle, n);
//     str_result = strnstr(haystack, needle, n);

//     printf("Test 5: Searching for \"%s\" in \"%s\" with n = %zu (limited to first 5 characters)\n", needle, haystack, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 6: Searching for the empty string (always found at the beginning)
//     needle = "";
//     haystack = "Non-empty string";
//     ft_result = ft_strnstr(haystack, needle, n);
//     str_result = strnstr(haystack, needle, n);

//     printf("Test 6: Searching for an empty string in \"%s\" with n = %zu\n", haystack, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 7: Searching with a zero-length haystack
//     haystack = "";
//     needle = "Hello";
//     n = 5;
//     ft_result = ft_strnstr(haystack, needle, n);
//     str_result = strnstr(haystack, needle, n);

//     printf("Test 7: Searching for \"%s\" in an empty string with n = %zu\n", needle, n);
//     printf("ft_strnstr result: \"%s\"\n", ft_result ? ft_result : "NULL");
//     printf("strnstr result: \"%s\"\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     return 0;
// }

