#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dp;
	const char	*sp;
	size_t		sp_len;
	size_t		dp_len;
	size_t		i;

	i = 0;
	dp = dst;
	sp = src;
	sp_len = ft_strlen(sp);
	dp_len = ft_strlen(dp);
	if (size <= dp_len)
		return (size + sp_len);
	dp += dp_len;
	while (*sp && ((dp_len + i) < size - 1))
	{
		*dp++ = *sp++;
		i++;
	}
	*dp = '\0';
	return (dp_len + sp_len);
}
