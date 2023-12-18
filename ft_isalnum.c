#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97) || (c <= 57 && c >= 48))
		return (1);
	return (0);
}
