#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		cnt;

	new = lst;
	cnt = 0;
	while (new)
	{
		cnt++;
		new = new->next;
	}
	return (cnt);
}
