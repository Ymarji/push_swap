#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef	struct	s_stack
{
	int	nbr;

	struct s_stack	*next;
}				t_stack;

typedef	struct	s_var
{
	t_stack *head_a;
	t_stack *head_b;
}				t_var;
int		ft_isdigit_str(char *str);
void	swap_a(t_var *var);

int		ft_lstsize_m(t_stack *lst);
t_stack	*ft_lstnew_m(int content);
void	ft_lstadd_back_m(t_stack **alst, t_stack *new);
t_stack	*ft_lstlast_m(t_stack *lst);

#endif