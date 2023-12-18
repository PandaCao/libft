#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	unsigned char	*res;
	size_t			index;
	size_t			total;

	index = 0;
	total = num_elements * element_size;
	res = (unsigned char *) malloc(total);
	if (res == NULL)
		return (NULL);
	while (index < total)
	{
		res[index] = 0;
		index++;
	}
	return ((void *)res);
}
