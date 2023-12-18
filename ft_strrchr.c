#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	const char	*res;

	res = str + ft_strlen(str);
	while (res >= str && *res != (char)character)
		res--;
	if (res >= str)
		return ((char *)res);
	else
		return (NULL);
}
