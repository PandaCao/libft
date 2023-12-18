#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str_1;
	const unsigned char	*str_2;

	str_1 = (const unsigned char *)s1;
	str_2 = (const unsigned char *)s2;
	while (n)
	{
		if (*str_1 != *str_2)
			return (*str_1 - *str_2);
		str_1++;
		str_2++;
		n--;
	}
	return (0);
}
