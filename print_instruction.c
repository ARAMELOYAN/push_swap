/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:06:12 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/02 19:43:31 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pr_inst_for_swap(int i, char *s)
{
	if (i == 3)
		ft_printf("%s\n", s);
	else if (i == 2)
		ft_printf("sa\n");
	else if (i == 1)
	{
		if (s[1] == 'a')
			ft_printf("sa\n");
		else
			ft_printf("sb\n");
	}
}

void	print_instruction(int i, char *s)
{
	if ((s[2] == 'r') || (!s[2] && (s[1] == 'r')))
	{
		if (i == 3)
			ft_printf("%s\n", s);
		if (i == 2)
		{
			if (s[2])
				ft_printf("r");
			ft_printf("ra\n");
		}
		if (i == 1)
		{
			if (s[2])
				ft_printf("r");
			ft_printf("rb\n");
		}
	}
	else if (i == 1 && s[0] != 's')
		ft_printf("%s\n", s);
	else
		pr_inst_for_swap(i, s);
}
