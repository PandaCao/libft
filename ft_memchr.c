#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*hay;
	unsigned char		need;

	hay = (const unsigned char *)s;
	need = (unsigned char)c;
	while (n)
	{
		if (*hay == need)
			return ((void *)hay);
		n--;
		hay++;
	}
	return (NULL);
}
