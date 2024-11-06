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
	char	strldst1[20];
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
    char *delimiter = "w";
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

    result = memchr(strmemchr, 'o', sizeof(strmemchr));
    result1 = ft_memchr(strmemchr, 'o', sizeof(strmemchr));

	printf("ft_memchr: %s\n", result);
	printf("memchr: %s\n", result1);

	return (0);
}
