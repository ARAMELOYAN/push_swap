/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repeat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:40:28 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/02 22:03:44 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_repeat(t_list *a, int n)
{
	while (a)
	{
		if (ft_atoi(a->content) == n)
		{
			ft_printf("ERROR: Number %i is repeated\n", n);
			return (0);
		}
		a = a->next;
	}
	return (1);
}
