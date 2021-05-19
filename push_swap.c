
#include "push_swap.h"

void	data_collect(t_var *var,char **arg)
{
	char	**tab;
	int		i;
	int		j;
	t_stack	*new;

	var->head = NULL;
	i = 1;
	while (arg[i])
	{
		j = 0;
		tab = ft_split(arg[i], ' ');
		while (tab[j])
		{
			new = ft_lstnew_m(ft_atoi(tab[j]));
			ft_lstadd_back_m(&(var->head), new);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	t_var	*var;
	t_stack *head;

	var = (t_var *)malloc(sizeof(t_var));
	if (ac <= 1)
		return (0);
	data_collect(var, av);
	head = var->head;
	while (head)
	{
		printf("%d \n", head->nbr);
		head = head->next;
	}
}