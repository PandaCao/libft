#include "libft.h"

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	int				index;
	int				result;
	unsigned int	counter;

	result = 0;
	index = 0;
	counter = 0;
	while (counter < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if ((unsigned char)s1[index] != (unsigned char)s2[index])
		{
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		index++;
		counter++;
	}
	return (result);
}
