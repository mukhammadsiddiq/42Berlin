
#include "libft.h"

void	ft_test(unsigned int i, char *v)
{
	if (*v >= 'a' && *v <= 'z')
	{
		*v -= 32; // Convert lowercase to uppercase
	}
}

// 1. Test for ft_atoi and standard atoi
void	test_ft_atoi(void)
{
	char	str1[] = "42";
	char	str2[] = "-1234";
	char	str3[] = "abc";
	char	str4[] = "0";
	char	str5[] = "   42";

	printf("Testing ft_atoi:\n");
	// Edge case: positive number
	printf("Real: %d, ft_: %d\n", atoi(str1), ft_atoi(str1));
	// Edge case: negative number
	printf("Real: %d, ft_: %d\n", atoi(str2), ft_atoi(str2));
	// Edge case: string with non-numeric characters
	printf("Real: %d, ft_: %d\n", atoi(str3), ft_atoi(str3));
	// Edge case: zero
	printf("Real: %d, ft_: %d\n", atoi(str4), ft_atoi(str4));
	// Edge case: string with leading spaces
	printf("Real: %d, ft_: %d\n", atoi(str5), ft_atoi(str5));
}

// 2. Test for ft_isalnum and standard isalnum
void	test_ft_isalnum(void)
{
	printf("Testing ft_isalnum:\n");
	// Edge case: alphanumeric character
	printf("Real: %d, ft_: %d\n", isalnum('a'), ft_isalnum('a'));
	// 'a' is alphanumeric
	printf("Real: %d, ft_: %d\n", isalnum('Z'), ft_isalnum('Z'));
	// 'Z' is alphanumeric
	printf("Real: %d, ft_: %d\n", isalnum('1'), ft_isalnum('1'));
	// '1' is alphanumeric
	// Edge case: non-alphanumeric character
	printf("Real: %d, ft_: %d\n", isalnum('#'), ft_isalnum('#'));
	// '#' is not alphanumeric
}

// 3. Test for ft_isdigit and standard isdigit
void	test_ft_isdigit(void)
{
	printf("Testing ft_isdigit:\n");
	// Edge case: digit character
	printf("Real: %d, ft_: %d\n", isdigit('9'), ft_isdigit('9'));
	// '9' is a digit
	printf("Real: %d, ft_: %d\n", isdigit('0'), ft_isdigit('0'));
	// '0' is a digit
	// Edge case: non-digit character
	printf("Real: %d, ft_: %d\n", isdigit('a'), ft_isdigit('a'));
	// 'a' is not a digit
	printf("Real: %d, ft_: %d\n", isdigit('@'), ft_isdigit('@'));
	// '@' is not a digit
}

// 4. Test for ft_memchr and standard memchr
void	test_ft_memchr(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "hello";

	printf("Testing ft_memchr:\n");
	// Edge case: char exists in string
	printf("Real: %s, ft_: %s\n", (char *)memchr(str1, 'c', 6),
		(char *)ft_memchr(str1, 'c', 6));
	// Edge case: char does not exist in string
	printf("Real: %s, ft_: %s\n", (char *)memchr(str1, 'z', 6),
		(char *)ft_memchr(str1, 'z', 6));
	// Edge case: search within a part of the string
	printf("Real: %s, ft_: %s\n", (char *)memchr(str2, 'e', 5),
		(char *)ft_memchr(str2, 'e', 5));
}

// 5. Test for ft_memcmp and standard memcmp
void	test_ft_memcmp(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "hello";
	char	s4[] = "hella";
	char	s5[] = "";
	char	s6[] = "";

	printf("Testing ft_memcmp:\n");
	// Edge case: same strings
	printf("Real: %d, ft_: %d\n", memcmp(s1, s2, 5), ft_memcmp(s1, s2, 5));
	// Edge case: strings differ
	printf("Real: %d, ft_: %d\n", memcmp(s3, s4, 5), ft_memcmp(s3, s4, 5));
	// Edge case: compare empty strings
	printf("Real: %d, ft_: %d\n", memcmp(s5, s6, 0), ft_memcmp(s5, s6, 0));
}

// 6. Test for ft_memmove and standard memmove
void	test_ft_memmove(void)
{
	char	dest1[6];
	char	src1[] = "abcdef";
	char	dest2[10] = "abcdef";
	char	src2[] = "ghi";

	printf("Testing ft_memmove:\n");
	// Edge case: no overlap
	memmove(dest1, src1, 6);
	printf("Real memmove: %s\n", dest1);
	ft_memmove(dest1, src1, 6);
	printf("ft_memmove: %s\n", dest1);
	// Edge case: overlapping regions (dest comes after src)
	memmove(dest2 + 3, src2, 3);
	printf("Real memmove: %s\n", dest2);
	ft_memmove(dest2 + 3, src2, 3);
	printf("ft_memmove: %s\n", dest2);
}

// 7. Test for ft_striteri and custom function
void	test_ft_striteri(void)
{
	char	str1[] = "school";

	printf("Testing ft_striteri:\n");
	ft_striteri(str1, ft_test);
	// ft_test is the function that modifies string
	printf("Modified string: %s\n", str1); // Expect "School"
}

// 8. Test for ft_split
void	test_ft_split(void)
{
	char	str1[] = "Hello world this is 42";
	char	**result1;
	char	str2[] = "";
	char	**result2;

	printf("Testing ft_split:\n");
	// Edge case: splitting a string into words
	result1 = ft_split(str1, ' ');
	for (int i = 0; result1[i]; i++)
	{
		printf("ft_split result[%d]: %s\n", i, result1[i]);
		free(result1[i]);
	}
	free(result1);
	// Edge case: empty string
	result2 = ft_split(str2, ' ');
	if (result2)
	{
		printf("ft_split result[0]: %s\n", result2[0]);
		free(result2[0]);
		free(result2);
	}
}

// 9. Test for ft_strchr and standard strchr
void	test_ft_strchr(void)
{
	char	str1[] = "hello";

	printf("Testing ft_strchr:\n");
	// Edge case: char exists
	printf("Real: %s, ft_: %s\n", strchr(str1, 'e'), ft_strchr(str1, 'e'));
	// Edge case: char does not exist
	printf("Real: %s, ft_: %s\n", strchr(str1, 'z'), ft_strchr(str1, 'z'));
}

// 10. Test for ft_strjoin and standard strjoin
void	test_ft_strjoin(void)
{
	char	str1[] = "Hello";
	char	str2[] = " World";
	char	*result;
	char	str3[] = "";

	printf("Testing ft_strjoin:\n");
	// Edge case: joining two non-empty strings
	result = ft_strjoin(str1, str2);
	printf("Real: %s, ft_: %s\n", strcat(str1, str2), result);
	free(result);
	// Edge case: joining an empty string
	printf("Real: %s, ft_: %s\n", strcat(str3, "world"), result);
	free(result);
}

// 11. Test for ft_strlcpy and standard strlcpy
// 11. Test for ft_strlcpy and standard strlcpy
void	test_ft_strlcpy(void)
{
	char	dest1[10];
	char	src1[] = "hello";
	char	dest2[5];

	printf("Testing ft_strlcpy:\n");
	// Edge case: copying into an array large enough to hold the string
	ft_strlcpy(dest1, src1, 10); // using your own implementation
	printf("ft_: %s\n", dest1);
	// Edge case: copying with insufficient space
	ft_strlcpy(dest2, src1, 5); // using your own implementation
	printf("ft_: %s\n", dest2);
}

// 12. Test for ft_strlen and standard strlen
void	test_ft_strlen(void)
{
	char	str1[] = "";
	char	str2[] = "hello";
	char	str3[] = "hello world";

	printf("Testing ft_strlen:\n");
	// Edge case: empty string
	printf("Real: %zu, ft_: %zu\n", strlen(str1), ft_strlen(str1));
	// Edge case: normal string
	printf("Real: %zu, ft_: %zu\n", strlen(str2), ft_strlen(str2));
	// Edge case: string with spaces
	printf("Real: %zu, ft_: %zu\n", strlen(str3), ft_strlen(str3));
}

int	main(void)
{
	test_ft_atoi();
	test_ft_isalnum();
	test_ft_isdigit();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memmove();
	test_ft_striteri();
	test_ft_split();
	test_ft_strchr();
	test_ft_strjoin();
	test_ft_strlcpy();
	test_ft_strlen();
	return (0);
}
