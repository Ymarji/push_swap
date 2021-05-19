
#include "push_swap.h"

int	ft_isdigit_str(char *str)
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

	var->head = NULL;
	i = 1;
	while (arg[i])
	{
		j = 0;
		tab = ft_split(arg[i], ' ');
		while (tab[j])
		{
			if (ft_isdigit_str(tab[j]) == 0)
				return (0);
			new = ft_lstnew_m(ft_atoi(tab[j]));
			ft_lstadd_back_m(&(var->head), new);
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
		ft_putendl_fd("Error", 1);
	head = var->head;
	while (head)
	{
		printf("%d \n", head->nbr);
		head = head->next;
	}
}