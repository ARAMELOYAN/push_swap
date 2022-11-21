/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:04:52 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/05 21:54:51 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(char *str, int a, ...)
{
	t_list	*temp;
	t_list	**stack;
	t_list	*lst;
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, a);
	while (a--)
	{
		stack = va_arg(ap, void *);
		temp = *stack;
		if (*stack && (*stack)->next)
		{
			ft_lstadd_front(stack, ft_lstlast(*stack));
			lst = *stack;
			while (lst->next->next != temp)
				lst = lst->next;
			lst->next = NULL;
			i = i + a + 1;
		}
	}
	print_instruction(i, str);
	va_end(ap);
}
