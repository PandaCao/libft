#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		str_len;
	char		*dp;
	const char	*sp;

	str_len = ft_strlen(src);
	dp = dst;
	sp = src;
	if (size == 0)
		return (str_len);
	while (*sp && size > 1)
	{
		*dp = *sp;
		size--;
		dp++;
		sp++;
	}
	*dp = '\0';
	return (str_len);
}
