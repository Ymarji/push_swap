
#include "push_swap.h"

void	swap_a(t_var *var)
{
	int	tmp;
	t_stack *next;

	if (ft_lstsize_m(var->head_a) <= 1)
		return ;
	tmp = var->head_a->nbr;
	next = var->head_a->next;
	var->head_a->nbr = next->nbr;
	next->nbr = tmp;
}

void	swap_b(t_var *var)
{
	int	tmp;
	t_stack *next;

	if (ft_lstsize_m(var->head_b) <= 1)
		return ;
	tmp = var->head_b->nbr;
	next = var->head_b->next;
	var->head_b->nbr = next->nbr;
	next->nbr = tmp;
}

void	push_a(t_var *var)
{
	
}