#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char		*ds;
	const unsigned char	*sr;

	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (ds > sr && sr + length > ds)
	{
		while (length)
		{
			length--;
			*(ds + length) = *(sr + length);
		}
	}
	else
	{
		while (length)
		{
			*ds = *sr;
			ds++;
			sr++;
			length--;
		}
	}
	return ((void *)dest);
}
