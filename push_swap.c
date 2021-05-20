
#include "push_swap.h"

int		check_double(t_var *var)
{
	t_stack	*lst_i;
	t_stack	*lst_j;

	lst_i = var->head_a;
	lst_j = var->head_a;
	while (lst_i->next)
	{
		lst_j = lst_i->next;
		while (lst_j)
		{
			if (lst_i->nbr == lst_j->nbr)
				return (0);
			lst_j = lst_j->next;
		}
		lst_i = lst_i->next;
	}
	return (1);
}

int		check_input(char *str)
{
	if (ft_isdigit_str(str) == 0)
		return (0);
	if (ft_atoi_l(str) <= -2147483648 || ft_atoi_l(str) >= 2147483647)
		return (0);
	return (1);
}

int		ft_isdigit_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	data_collect(t_var *var,char **arg)
{
	char	**tab;
	int		i;
	int		j;
	t_stack	*new;

	var->head_a = NULL;
	i = 1;
	while (arg[i])
	{
		j = 0;
		tab = ft_split(arg[i], ' ');
		while (tab[j])
		{
			if (check_input(tab[j]) == 0)
				return (0);
			new = ft_lstnew_m(ft_atoi(tab[j]));
			ft_lstadd_back_m(&(var->head_a), new);
			j++;
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_var	*var;
	t_stack *head;

	var = (t_var *)malloc(sizeof(t_var));
	if (ac <= 1)
		return (0);
	if (data_collect(var, av) == 0)
		ft_putendl_fd("Error", 2);
	if (check_double(var) == 0)
		ft_putendl_fd("Error", 2);
	head = var->head_a;
	while (head)
	{
		printf("%d \n", head->nbr);
		head = head->next;
	}
	swap_a(var);
	head = var->head_a;
	while (head)
	{
		printf("%d \n", head->nbr);
		head = head->next;
	}
	return (0);
}