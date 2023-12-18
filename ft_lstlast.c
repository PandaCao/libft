#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cnt;

	if (!lst)
		return (NULL);
	cnt = lst;
	while (cnt->next != NULL)
	{
		cnt = cnt->next;
	}
	return (cnt);
}
