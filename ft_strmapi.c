#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			len;
	unsigned int	index;

	index = 0;
	len = ft_strlen(s);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		res[index] = f(index, *s);
		s++;
		index++;
	}
	res[index] = '\0';
	return (res);
}
