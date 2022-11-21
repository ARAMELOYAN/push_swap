/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:27:52 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/09 20:28:28 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize(int ac, char **av, t_list **a)
{
	while (ac > 1)
	{
		if (check_repeat(*a, ft_atoi(av[--ac])))
			ft_lstadd_front(a, ft_lstnew((av[ac])));
	}
}
