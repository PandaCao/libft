#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dest;
	b = src;
	while (n)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dest);
}
