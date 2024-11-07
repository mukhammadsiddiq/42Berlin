#include "libft.h"

int	main(void)
{
	char	*src = "School";
	char	dst[20];
	char	dst1[20];
	char	*move = "I am 22 years old";
	char	move_dst[30];
	char	move_dst1[30];
	char	*strlcpy_src = "Mukhammad";
	char	strldst[1];
	char	*strlcattest = "siddiq";
	char	strlcatdst[17] = "Mukhammad";

	ft_memcpy(dst, src, 4);
	memcpy(dst1, src, 4);
	printf("ft_memcpy dst -> %s\n", dst);
	printf("memcpy dst -> %s\n", dst1);
	printf("------------------------\n");
	printf("ft_strlen -> %lu\n", ft_strlen(src));
	printf("strlen -> %lu\n", strlen(src));
	printf("------------------------\n");
	printf("ft_isalnum -> %d\n", ft_isalnum(src[0]));
	printf("------------------------\n");
	ft_memmove(move_dst, move, 10);
	memmove(move_dst1, move, 10);
	printf("------------------------\n");
	printf("ft_memmove dst -> %s\n", move_dst);
	printf("memmove dst -> %s\n", move_dst1);
	printf("------------------------\n");
	printf("ft_strlcpy: %zu -> dst: %s\n", ft_strlcpy(strldst, strlcpy_src, 0), strldst);
	printf("------------------------\n");
	printf("ft_strcat: %zu -> dst: %s\n", ft_strlcat(strlcatdst, strlcattest, 17), strlcatdst);
	printf("------------------------\n");
	printf("ft_toupper->%c\n", ft_toupper('a'));
	printf("toupper-> %c\n", toupper('a'));
	printf("------------------------\n");
	char str[] = "Hello world, how are you?";
    char *token;
    token = ft_strchr(str, 'w');
    printf("ft_strchr->%c\n", *token);
	char sstr[] = "Hello world, how are you?";
    char *ttoken;
	char *ttoken1;
    ttoken = ft_strrchr(sstr, 'w');
    ttoken1 = strrchr(sstr, 'w');
	printf("------------------------\n");
	printf("ft_strrchr->%s\n", ttoken);
    printf("strrchr->%s\n", ttoken1);
	printf("------------------------\n");
	printf("ft_strncmp->%d\n", ft_strncmp("Siddiq", "Siddiq", 5));
	printf("strncmp->%d\n", strncmp("Siddiq", "Siddiq", 5));
	printf("------------------------\n");
	const char *strmemchr = "Hello, World!";
    unsigned char *result;
    unsigned char *result1;

    result = memchr(strmemchr, 'o', 14);
    result1 = ft_memchr(strmemchr, 'o', 14);

	printf("ft_memchr: %s\n", result);
	printf("memchr: %s\n", result1);
	printf("------------------------\n");
	char	*arr = "siddiq  ggfd";
	char	*arr1 = "siddiq ggfd";
	printf("ft_memcmp: %d\n", ft_memcmp(arr, arr1, 8));
	printf("memcmp: %d\n", memcmp(arr, arr1, 8));
	printf("------------------------\n");
	char *ftt_strnstr = "Utility functions from BSD systems (libbsd, -lbsd)";
	char *find = "from";
	char *resultstr = ft_strnstr(ftt_strnstr, find, strlen(ftt_strnstr));
	printf("ft_strnstr: %s\n", resultstr);
	printf("------------------------\n");
	char *ftt_strdup = "school";
	char *ftt_arr = ft_strdup(ftt_strdup);
	char *ftt_arr1 = strdup(ftt_strdup);
	printf("ft_strdup: %s\n", ftt_arr);
	printf("strdup: %s\n", ftt_arr1);
	printf("------------------------\n");
	int *ftt_calloc = ft_calloc(17, sizeof(int));
	for (int i = 0; i < 17; i++)
	{
		printf("%i->", ftt_calloc[i]);
	}
	printf("------------------------\n");
	char *ftt_substr = "The string from which to create the substring.";
	char *substring = ft_substr(ftt_substr, 1, ft_strlen(ftt_substr));
	printf("ft_substr: %s", substring);
	printf("------------------------\n");
	printf("------------------------\n");
	return (0);
}
