#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	const char	*res;

	res = str;
	while (*res)
	{
		if (*res == (char)character)
			return ((char *)res);
		res++;
	}
	if (character == '\0')
		return ((char *)res);
	return (NULL);
}
