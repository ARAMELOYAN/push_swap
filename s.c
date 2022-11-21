/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:41:58 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/05 21:54:26 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(char *str, int a, ...)
{
	va_list	ap;
	t_list	*temp;
	t_list	**stack;
	int		i;

	i = 0;
	va_start(ap, a);
	while (a--)
	{
		stack = va_arg(ap, void *);
		if (*stack && (*stack)->next)
		{
			temp = *stack;
			*stack = (*stack)->next;
			temp->next = (*stack)->next;
			(*stack)->next = temp;
			i = i + a + 1;
		}
	}
	print_instruction(i, str);
	va_end(ap);
}
