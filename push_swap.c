/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:23:53 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/18 14:06:36 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pr_list(t_list *a)
{
	while (a)
	{
		ft_printf("%s ", a->content);
		a = a->next;
	}
}

static int	sorted(t_list *a)
{
	while (a)
	{
		if (a->next && ft_atoi(a->content) > ft_atoi(a->next->content))
			return (0);
		a = a->next;
	}
	return (1);
}
/*
static int	reverse_sorted(t_list *a)
{
	while (a)
	{
		if (a->next && ft_atoi(a->content) < ft_atoi(a->next->content))
			return (0);
		a = a->next;
	}
	return (1);
}
*/
int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int curr_min;
	int curr_max;
	int	count;

	count = 0;
	a = NULL;
	b = NULL;
	if (ac > 1)
	{	
		initialize(ac, av, &a);
		curr_min = ft_atoi(a->content);
		curr_max = curr_min;
		while (!sorted(a) && a->next)
		{
			while (ft_atoi(ft_lstlast(a)->content) < ft_atoi(a->content) && ft_atoi(ft_lstlast(a)->content) < ft_atoi(a->next->content)) 
			{
				if (ft_atoi(a->content) > ft_atoi(a->next->content))
					s("sa", 1, &a);
				rr("rra", 1, &a);
			}
			while (a->next && ft_atoi(a->content) < ft_atoi(a->next->content))
				p("pb", &b, &a);
			if (a->next && ft_atoi(a->content) > ft_atoi(a->next->content))
				s("sa", 1, &a);
		}
		while (!sorted(b) && b->next)
		{
			while (ft_atoi(ft_lstlast(b)->content) > ft_atoi(b->content) && ft_atoi(ft_lstlast(b)->content) > ft_atoi(b->next->content)) 
			{
				if (ft_atoi(b->content) < ft_atoi(b->next->content))
					s("sb", 1, &b);
				rr("rrb", 1, &b);
			}
			while (b->next && ft_atoi(b->content) > ft_atoi(b->next->content))
				p("pa", &a, &b);
			if (b->next && ft_atoi(b->content) < ft_atoi(b->next->content))
				s("sb", 1, &b);
		}
		while (!sorted(a) && a->next)
		{
			while (ft_atoi(ft_lstlast(a)->content) < ft_atoi(a->content) && ft_atoi(ft_lstlast(a)->content) < ft_atoi(a->next->content)) 
			{
				if (ft_atoi(a->content) > ft_atoi(a->next->content))
					s("sa", 1, &a);
				rr("rra", 1, &a);
			}
			while (a->next && ft_atoi(a->content) < ft_atoi(a->next->content))
				p("pb", &b, &a);
			if (a->next && ft_atoi(a->content) > ft_atoi(a->next->content))
				s("sa", 1, &a);
		}
		while (!sorted(b) && b->next)
		{
			while (ft_atoi(ft_lstlast(b)->content) > ft_atoi(b->content) && ft_atoi(ft_lstlast(b)->content) > ft_atoi(b->next->content)) 
			{
				if (ft_atoi(b->content) < ft_atoi(b->next->content))
					s("sb", 1, &b);
				rr("rrb", 1, &b);
			}
			while (b->next && ft_atoi(b->content) > ft_atoi(b->next->content))
				p("pa", &a, &b);
			if (b->next && ft_atoi(b->content) < ft_atoi(b->next->content))
				s("sb", 1, &b);
		}

		pr_list(a);
		ft_printf("\n");
		pr_list(b);
	}
	return (0);
}
