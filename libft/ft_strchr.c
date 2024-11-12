/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:18:38 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 13:20:04 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}

// int main() {
//     // Test cases for ft_strchr
//     const char *test_str = "Hello, World!";
//     int test_char = 'o';

//     // Test 1: Normal character search
//     char *ft_result = ft_strchr(test_str, test_char);
//     char *str_result = strchr(test_str, test_char);

//     printf("Test 1: Searching for '%c' in \"%s\"\n", test_char, test_str);
//     printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 2: Search for a character not in the string
//     test_char = 'z';
//     ft_result = ft_strchr(test_str, test_char);
//     str_result = strchr(test_str, test_char);

//     printf("Test 2: Searching for '%c' in \"%s\"\n", test_char, test_str);
//     printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 3: Searching for the first character in the string
//     test_char = 'H';
//     ft_result = ft_strchr(test_str, test_char);
//     str_result = strchr(test_str, test_char);

//     printf("Test 3: Searching for '%c' in \"%s\"\n", test_char, test_str);
//     printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 4: Searching for the last character in the string
//     test_char = '!';
//     ft_result = ft_strchr(test_str, test_char);
//     str_result = strchr(test_str, test_char);

//     printf("Test 4: Searching for '%c' in \"%s\"\n", test_char, test_str);
//     printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 5: Searching for the null terminator character '\0'
//     test_char = '\0';
//     ft_result = ft_strchr(test_str, test_char);
//     str_result = strchr(test_str, test_char);

//     printf("Test 5: Searching for '\\0' in \"%s\"\n", test_str);
//     printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 6: Empty string search
//     const char *empty_str = "";
//     test_char = 'a';
//     ft_result = ft_strchr(empty_str, test_char);
//     str_result = strchr(empty_str, test_char);

//     printf("Test 6: Searching for '%c' in an empty string\n", test_char);
//     printf("ft_strchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

// 	// Test cases for ft_strchr
//     const char *test_str1 = "abbbbbbbbb";
//     int test_char1 = 'a';

//     // Test 1: Normal character search
//     char *ft_result1 = ft_strchr(test_str1, 'a');
//     char *str_result1 = strchr(test_str1, 'a');

//     printf("Test 1: Searching for '%c' in \"%s\"\n", test_char1, test_str1);
//     printf("ft_strchr result: %s\n", ft_result1 ? ft_result1 : "NULL");
//     printf("strchr result: %s\n", str_result1 ? str_result1 : "NULL");
//     printf("Match: %s\n\n", ft_result1 == str_result1 ? "PASS" : "FAIL");

//     return 0;
// }
