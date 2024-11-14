/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:08:27 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/15 00:02:46 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	if (c == '\0')
		return ((char *) (s + n));
	while (n - 1 >= 0)
	{
		if (s[n] == (char) c)
			return ((char *) s + n);
		n--;
	}
	return (NULL);
}
// void test_ft_strchr(const char *s, int c) {
//     char *result_ft;
//     char *result_orig;

//     // Using the original `strchr`
//     result_orig = strrchr(s, c);
//     // Using your implementation `ft_strchr`
//     result_ft = ft_strrchr(s, c);

//     printf("Testing with string: \"%s\" and character: '%c'\n", s, c);
//     printf("Original `strchr`: %s\n", result_orig ? result_orig : "(null)");
//     printf("Your `ft_strchr`: %s\n", result_ft ? result_ft : "(null)");

//     if (result_ft == result_orig) {
//         printf("✅ Both functions returned the same result.\n");
//     } else {
//         printf("❌ Results differ!\n");
//     }
//     printf("------------------------------\n");
// }

// int main() {
//     // Test cases
//     test_ft_strchr("Hello, World!", ';');       // Character in the middle
//     test_ft_strchr("Hello, World!", 'H');       // Character at the start
//     test_ft_strchr("Hello, World!", '!');       // Character at the end
//     test_ft_strchr("Hello, World!", 'z');       // Character not found
//     test_ft_strchr("Hello, World!", '\0');      // Search for null terminator
//     test_ft_strchr("", 'a');                    // Empty string test
//     test_ft_strchr(NULL, 'a');                  // Null string test

//     return 0;
// }