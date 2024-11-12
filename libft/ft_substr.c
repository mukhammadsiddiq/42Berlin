/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:06:58 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 18:55:37 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	substring = NULL;
	if (ft_strlen(s) <= start)
		return (substring);
	substring = malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, s + start, len + 1);
	return (substring);
}

// int main() {
//     // Test 1: Extract substring from the middle of the string
//     const char *str = "Hello";
//     unsigned int start = 10;
//     size_t len = 10;

//     char *ft_result = ft_substr(str, start, len);
//     char *std_result = strndup(str + 1, 4);  // Using strndup as the reference function

//     printf("Test 1: Extracting substring from \"%s\" starting at index %u with length %zu\n", str, start, len);
//     printf("ft_substr result: \"%s\"\n", ft_result);
//     printf("Standard result: \"%s\"\n", std_result);
//     printf("Match: %s\n\n", strcmp(ft_result, std_result) == 0 ? "PASS" : "FAIL");

//     // Free the allocated memory
//     free(ft_result);
//     free(std_result);

//     // Test 2: Start index beyond the string length (should return empty string)
//     start = 15;  // Beyond the end of the string
//     len = 5;

//     ft_result = ft_substr(str, start, len);
//     std_result = strdup("");  // Expected result is empty string

//     printf("Test 2: Extracting substring with start index %u (beyond the string length)\n", start);
//     printf("ft_substr result: \"%s\"\n", ft_result);
//     printf("Standard result: \"%s\"\n", std_result);
//     printf("Match: %s\n\n", strcmp(ft_result, std_result) == 0 ? "PASS" : "FAIL");

//     // Free the allocated memory
//     free(ft_result);
//     free(std_result);

//     // Test 3: Substring with length greater than remaining string length
//     start = 7;
//     len = 20;  // Length exceeds remaining string size

//     ft_result = ft_substr(str, start, len);
//     std_result = strndup(str + start, strlen(str) - start);  // Should copy until the end of the string

//     printf("Test 3: Extracting substring with length greater than remaining string length\n");
//     printf("ft_substr result: \"%s\"\n", ft_result);
//     printf("Standard result: \"%s\"\n", std_result);
//     printf("Match: %s\n\n", strcmp(ft_result, std_result) == 0 ? "PASS" : "FAIL");

//     // Free the allocated memory
//     free(ft_result);
//     free(std_result);

//     // Test 4: Empty input string (should return empty string)
//     start = 0;
//     len = 5;

//     ft_result = ft_substr("", start, len);
//     std_result = strdup("");  // Expected result is empty string

//     printf("Test 4: Extracting substring from an empty string\n");
//     printf("ft_substr result: \"%s\"\n", ft_result);
//     printf("Standard result: \"%s\"\n", std_result);
//     printf("Match: %s\n\n", strcmp(ft_result, std_result) == 0 ? "PASS" : "FAIL");

//     // Free the allocated memory
//     free(ft_result);
//     free(std_result);

//     return 0;
// }
