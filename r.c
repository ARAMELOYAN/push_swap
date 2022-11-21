/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:56:40 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/05 21:54:40 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(char *str, int a, ...)
{
	t_list	*temp;
	t_list	**stack;
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, a);
	while (a--)
	{
		stack = va_arg(ap, void *);
		if (*stack && (*stack)->next)
		{
			temp = *stack;
			ft_lstadd_back(stack, temp);
			*stack = (*stack)->next;
			temp->next = NULL;
			i += a + 1;
		}
	}
	print_instruction(i, str);
	va_end(ap);
}
