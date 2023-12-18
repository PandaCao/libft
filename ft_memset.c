#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*a;
	unsigned char	ch;

	a = (unsigned char *)ptr;
	ch = value;
	while (num)
	{
		*a = ch;
		a++;
		num--;
	}
	return (ptr);
}
