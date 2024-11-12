/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:08:27 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 19:29:36 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	if (n > 0)
	{
		s += n;
		while (n >= 0)
		{
			if (*s == (unsigned char) c)
				return ((char *) s);
			--s;
			n--;
		}
	}
	if (c == '\0')
		return ((char *) s);
	return (NULL);
}

// int main() {
//     // Test cases for ft_strrchr
//     const char *test_str = "Hello, World!";
//     int test_char = 'o';

//     // Test 1: Normal character search (last occurrence)
//     char *ft_result = ft_strrchr(test_str, test_char);
//     char *str_result = strrchr(test_str, test_char);

//     printf("Test 1: Searching for the last occurrence of '%c' in \"%s\"\n", test_char, test_str);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 2: Search for a character not in the string
//     test_char = 'z';
//     ft_result = ft_strrchr(test_str, test_char);
//     str_result = strrchr(test_str, test_char);

//     printf("Test 2: Searching for '%c' (not in \"%s\")\n", test_char, test_str);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 3: Searching for the first occurrence (it should be the last occurrence of 'o')
//     test_char = 'o';
//     ft_result = ft_strrchr(test_str, test_char);
//     str_result = strrchr(test_str, test_char);

//     printf("Test 3: Searching for the last occurrence of '%c' in \"%s\"\n", test_char, test_str);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 4: Searching for the last character in the string
//     test_char = '!';
//     ft_result = ft_strrchr(test_str, test_char);
//     str_result = strrchr(test_str, test_char);

//     printf("Test 4: Searching for '%c' (last character in \"%s\")\n", test_char, test_str);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 5: Searching for the null terminator character '\0'
//     test_char = '\0';
//     ft_result = ft_strrchr(test_str, test_char);
//     str_result = strrchr(test_str, test_char);

//     printf("Test 5: Searching for '\\0' in \"%s\"\n", test_str);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

//     // Test 6: Empty string search
//     const char *empty_str = "";
//     test_char = 'a';
//     ft_result = ft_strrchr(empty_str, test_char);
//     str_result = strrchr(empty_str, test_char);

//     printf("Test 6: Searching for '%c' in an empty string\n", test_char);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");

// 	const char *empty_str1 = "abbbbbbb";
//     test_char = 'a';
//     ft_result = ft_strrchr(empty_str1, test_char);
//     str_result = strrchr(empty_str1, test_char);

//     printf("Test 7: Searching for '%c' in  string\n", test_char);
//     printf("ft_strrchr result: %s\n", ft_result ? ft_result : "NULL");
//     printf("strrchr result: %s\n", str_result ? str_result : "NULL");
//     printf("Match: %s\n\n", ft_result == str_result ? "PASS" : "FAIL");
//     return 0;
// }
