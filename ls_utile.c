#include "push_swap.h"


int		ft_lstsize_m(t_stack *lst)
{
	int cp;

	cp = 0;
	while (lst != NULL)
	{
		cp++;
		lst = lst->next;
	}
	return (cp);
}

t_stack	*ft_lstnew_m(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (0);
	new->nbr = content;
	new->next = NULL;
	return (new);
}

t_stack	*ft_lstlast_m(t_stack *lst)
{
	t_stack *tmp;

	tmp = lst;
	if (tmp == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ft_lstadd_back_m(t_stack **alst, t_stack *new)
{
	t_stack	*p;

	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	p = ft_lstlast_m(*alst);
	p->next = new;
}
